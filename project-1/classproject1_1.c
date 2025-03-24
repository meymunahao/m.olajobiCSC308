/* Write a C program to input user’s age, 
if the user age is greater than 18 display a message “You can vote”, 
else display a message “You cannot vote”. */

#include <stdio.h>

int main(){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
   
    if (age < 18){
        printf("You can vote.\n");
    }
    else{
        printf("You cannot vote.\n");
    } 

    return 0;
}
