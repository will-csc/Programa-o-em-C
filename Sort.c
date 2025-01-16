#include <stdio.h>
#include <string.h>

void sort(char arr[][20], int n);

void main(){
    char states[4][20] = {
        "Florida",
        "Oregon",
        "California",
        "Georgia"
    };
    sort(states, 4);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", states[i]);
    }
}
void sort(char arr[][20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
