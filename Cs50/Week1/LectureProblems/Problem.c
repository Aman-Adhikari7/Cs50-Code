#include <stdio.h>
// #include <ctype.h> 

// int main(void)
// {
//     char name[100];
//     printf("Whats your name? ");
//     scanf("%99s",&name);
//     printf("Hello, %s",name);
// }


// second problem 



int main(void)
{
    int height;

    // Keep asking for a valid input until the height is positive
    while (1) {
        printf("What's the height you want: ");
        
        // Attempt to read an integer
        if (scanf("%d", &height) != 1) {
            // If the input is not a valid integer (e.g., letters), clear the input buffer
            printf("Invalid input. Please enter a valid positive number greater than 0.\n");
            while(getchar() != '\n');  // Clear the invalid input from the buffer
        } else if (height <= 0) {
            // If the height is non-positive, prompt again
            printf("Please enter a valid positive number greater than 0.\n");
        } else {
            // If a valid positive number is entered, break out of the loop
            break;
        }
    }

        
 
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
