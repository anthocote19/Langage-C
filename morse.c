#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

const char* morse_code[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", 
    ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", 
    "...--", "....-", ".....", "-....", "--...", "---..", "----.", "----."
};

void to_morse(char ch) {
    if (isdigit(ch)) {
        printf("%s ", morse_code[ch - '0' + 26]);
    } else if (isalpha(ch)) {
        ch = toupper(ch); 
        if (ch != 'I' && ch != 'O' && ch != 'U') {
            printf("%s ", morse_code[ch - 'A']);
        }
    }
}

int main() {
    char input[MAX_LENGTH];

    printf("Enter text to convert to Morse code (letters and numbers only, I, O, U excluded): ");
    fgets(input, MAX_LENGTH, stdin);
    
    input[strcspn(input, "\n")] = '\0';

    for (int i = 0; i < strlen(input); i++) {
        if (!isalnum(input[i])) {
            printf("Invalid input! Only letters and numbers are allowed.\n");
            return 1;
        }
    }

    printf("Morse code: ");
    for (int i = 0; i < strlen(input); i++) {
        to_morse(input[i]);
    }
    printf("\n");

    return 0;
}
