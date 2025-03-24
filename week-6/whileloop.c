#include <stdio.h>

int main(){

    int flag = 1;
    char name [20];

    while (flag == 1){
        printf("Please input your name: ");
        scanf("%i", &flag);
        puts(" ");
    }

    return 0;
}