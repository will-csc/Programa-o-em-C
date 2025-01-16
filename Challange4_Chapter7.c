#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void encrypt(char[], int);
void decrypt(char[], int);

int main() {
    char myString[21] = {0};
    int iSelection = 0;
    int userKey = 0; // User-defined key

    while (iSelection != 4) {
        printf("\n\n1\tEncrypt Clear Text\n");
        printf("2\tDecrypt Cipher Text\n");
        printf("3\tSet New Key\n");
        printf("4\tQuit\n");
        printf("\nSelect a Cryptography Option: ");
        scanf("%d", &iSelection);

        switch (iSelection) {
            case 1:
                if (userKey == 0) {
                    printf("\nPlease set a key first using Option 3.\n");
                } else {
                    printf("\nEnter one word as clear text to encrypt: ");
                    scanf("%s", myString);
                    encrypt(myString, userKey);
                }
                break;
            case 2:
                if (userKey == 0) {
                    printf("\nPlease set a key first using Option 3.\n");
                } else {
                    printf("\nEnter cipher text to decrypt: ");
                    scanf("%s", myString);
                    decrypt(myString, userKey);
                }
                break;
            case 3:
                printf("\nEnter a numeric key: ");
                scanf("%d", &userKey);
                printf("\nNew Key Set to: %d\n", userKey);
                break;
            case 4:
                printf("\nGoodbye!\n");
                break;
            default:
                printf("\nInvalid selection. Please try again.\n");
        }
    }

    return 0;
}

// Function to encrypt the message using a user-defined key
void encrypt(char sMessage[], int key) {
    int x = 0;
    printf("\nEncrypting with key %d...\n", key);

    // Encrypt the message by shifting each character's ASCII value
    while (sMessage[x]) {
        sMessage[x] = (sMessage[x] + key) % 128; // Ensure within ASCII range
        x++;
    }
    printf("\nEncrypted Message: %s\n", sMessage);
}

// Function to decrypt the message using a user-defined key
void decrypt(char sMessage[], int key) {
    int x = 0;
    printf("\nDecrypting with key %d...\n", key);

    // Decrypt the message by reversing the shift
    while (sMessage[x]) {
        sMessage[x] = (sMessage[x] - key + 128) % 128; // Ensure within ASCII range
        x++;
    }
    printf("\nDecrypted Message: %s\n", sMessage);
}

