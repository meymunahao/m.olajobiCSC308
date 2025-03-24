#include <stdio.h>

int main(){
    // literals
    int age = 90;
    char name[] = "George";
    float height = 6.2;

    //printf
    C Programming 6
    int num = 10;
    float pi = 3.14;
    printf("Integer: %d\n", num); // Print integer
    printf("Float: %.2f\n", pi); // Print float with 2 d

    //scanf
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // & is required to store the input i
    printf("Your age is: %d\n", age);
 
   /*Different signs and what they mean;
    %d : Integer
    %f : Float
    %c : Character
    %s : String
    %x : Hexadecimal
    %% : Print the percent sign */ 

    return 0;
}


    