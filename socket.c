#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

int main() {
    char domain[256];
    printf("Enter domain name: ");
    scanf("%255s", domain);

    WSADATA wsa;
    WSAStartup(MAKEWORD(2, 2), &wsa);

    struct hostent *host = gethostbyname(domain);
    if (!host) return 1;

    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCKET) return 1;

    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(80);
    server.sin_addr.s_addr = *(u_long *)host->h_addr;

    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0) {
        closesocket(sock);
        WSACleanup();
        return 1;
    }

    char request[512];
    snprintf(request, sizeof(request), "GET / HTTP/1.1\r\nHost: %s\r\nConnection: close\r\n\r\n", domain);
    send(sock, request, strlen(request), 0);

    FILE *file = fopen("result.txt", "w");
    if (!file) {
        closesocket(sock);
        WSACleanup();
        return 1;
    }

    char buffer[1024];
    int bytes;
    while ((bytes = recv(sock, buffer, sizeof(buffer) - 1, 0)) > 0) {
        buffer[bytes] = '\0';
        fputs(buffer, file);
    }

    fclose(file);
    closesocket(sock);
    WSACleanup();
    return 0;
}
