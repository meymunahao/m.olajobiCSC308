#include <stdio.h>

int main(){

    int flag = 1;
    char name [20];

    do {
        printf("Please input your name: ");
        scanf("%i", &flag);
        puts(" ");
    } while (flag == 1);

    return 0;
}