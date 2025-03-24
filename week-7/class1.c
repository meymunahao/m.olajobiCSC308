#include <stdio.h>

int main(){
    int a;
    int *p2a;

    p2a = &a;

    printf("%p\n", p2a); //behaviour is undefined. Results/outputs defer for different laptops

    return 0;
}
