#include <stdio.h>

int main(){

    char name[] = "Meymunah";

    for (int i=0; i < 8; i++){
        printf("%c\n", name[i]);
    }

    char *p2name = name;
    puts(" ");
    for (int i=0; i < 8; i++){
        printf("%c\n", *p2name);  // derefence operator- shows you the value stored in the address
        p2name++;
    }

    return 0;
}
