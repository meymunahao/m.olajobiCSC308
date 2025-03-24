#include <stdio.h>

int main(){

    char name[] = "Meymunah";

    printf("%p\n", name);
    puts("Loop: ");

    for (int i=0; i < 8; i++){
        printf("%p\n",&name[i]);

    }
    scanf("%s", name);

    return 0;
}
