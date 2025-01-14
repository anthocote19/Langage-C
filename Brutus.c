#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

int main() {
    unsigned char check[16] = {0};  
    int pSize;                      
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";  
    char toCheck[255] = {0};         
    unsigned char digest[16];        
    int alphabetSize = strlen(alphabet);  

    printf("Entrez le hash MD5 (16 valeurs hexadécimales séparées par des espaces) :\n");
    scanf("%x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x",
          &check[0], &check[1], &check[2], &check[3], &check[4], &check[5],
          &check[6], &check[7], &check[8], &check[9], &check[10], &check[11],
          &check[12], &check[13], &check[14], &check[15]);

    printf("Entrez la taille du mot de passe à tester : ");
    scanf("%d", &pSize);

    int maxCombinations = 1;
    for (int i = 0; i < pSize; i++) {
        maxCombinations *= alphabetSize;  
    }

    for (int i = 0; i < maxCombinations; i++) {
        int temp = i;
        for (int j = 0; j < pSize; j++) {
            toCheck[j] = alphabet[temp % alphabetSize];  
            temp /= alphabetSize;  
        }

        MD5_CTX mdContext;
        MD5_Init(&mdContext);
        MD5_Update(&mdContext, toCheck, pSize);
        MD5_Final(digest, &mdContext);

        if (memcmp(digest, check, 16) == 0) {
            printf("Mot de passe trouvé : %s\n", toCheck);
            return 0;  
        }
    }

    printf("Mot de passe non trouvé.\n");
    return 0;
}

