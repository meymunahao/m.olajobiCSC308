/* Write a C program that accepts a character between A to J 
and prints the next 6 characters. */

#include <stdio.h>

int main(){

    char inputChar;

    printf("Enter a character between A and J: ");
    scanf(" %c", &inputChar);

    if (inputChar >= 'A' && inputChar <= 'J'){
        printf("The next 6 characters are: \n");
        for (char i=1; i<6; i++){
                printf("%c\n", inputChar + 1);
        }
    }
    else{
        printf("Invalid input. Enter a character between A and J.\n");
    }

    return 0;
}