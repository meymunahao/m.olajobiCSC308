/*Using C Switch statement, write a program that accepts any character, 
float or integer, and prints the next four corresponding characters, 
floats or integers in multiples of 3, 
print the ASCII code and the size of the Operator.
*/

#include <stdio.h>

int main() {
    int choice;
    printf("Select input type:\n");
    printf("1. Character\n");
    printf("2. Integer\n");
    printf("3. Float\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);

            // Print the next four characters
            printf("The next four characters are: ");
            for (int i = 1; i <= 4; i++) {
                printf("%c ", ch + i);
            }
            printf("\n");

            // Print ASCII code and size of character
            printf("ASCII code of '%c' is %d\n", ch, ch);
            printf("Size of character: %lu bytes\n", sizeof(ch));
            break;
        }

        case 2: {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);

            // Print the next four integers in multiples of 3
            printf("The next four integers in multiples of 3 are: ");
            for (int i = 1; i <= 4; i++) {
                printf("%d ", num + i * 3);
            }
            printf("\n");

            // Print size of integer
            printf("Size of integer: %lu bytes\n", sizeof(num));
            break;
        }

        case 3: {
            float num;
            printf("Enter a float: ");
            scanf("%f", &num);

            // Print the next four floats in multiples of 3
            printf("The next four floats in multiples of 3 are: ");
            for (int i = 1; i <= 4; i++) {
                printf("%.2f ", num + i * 3.0);
            }
            printf("\n");

            // Print size of float
            printf("Size of float: %lu bytes\n", sizeof(num));
            break;
        }

        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
            break;
    }

    return 0;
}
