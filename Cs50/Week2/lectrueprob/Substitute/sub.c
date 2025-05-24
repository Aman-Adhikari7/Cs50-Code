#include <stdio.h>
#include <string.h>

int main() {
    char key[27];
    char real[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char text[100];
    char subs[100];

    printf("Give me the key:\n");
    scanf("%26s", key);

    printf("Give me the text:\n");
    scanf("%99s", text);

    int text_len = strlen(text);

    for (int j = 0; j < text_len; j++) {
        for (int i = 0; i < 26; i++) {
            if (text[j] == real[i]) {
                subs[j] = key[i];  // Replace with corresponding letter from key
                break;  // Stop searching once match is found
            }
        }
    }

    subs[text_len] = '\0';  // Null-terminate the string

    printf("New pass is: %s\n", subs);

    return 0;
}



