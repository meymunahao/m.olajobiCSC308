#include <stdio.h>

int main(){
    int a;
    float b;
    double c;
    char d;
    double money[5];

    puts("Memory of variables declared above: \n");
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of c: %p\n", &c);
    printf("Address of d: %p\n", &d);

    return 0;
}
