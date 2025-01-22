#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define THREAD_COUNT 10

HANDLE threads[THREAD_COUNT];
DWORD WINAPI thread_function(LPVOID param) {
    Sleep(5000 * (int)param);
    return 0;
}

int main() {
    for (int i = 0; i < THREAD_COUNT; i++) {
        threads[i] = CreateThread(NULL, 0, thread_function, (LPVOID)(i + 1), 0, NULL);
    }

    for (int t = 1; t <= THREAD_COUNT * 5; t++) {
        printf("Time: %d seconds\n", t);
        Sleep(1000);
    }

    WaitForMultipleObjects(THREAD_COUNT, threads, TRUE, INFINITE);
    printf("All threads finished.\n");

    for (int i = 0; i < THREAD_COUNT; i++) {
        CloseHandle(threads[i]);
    }

    return 0;
}
