#include <stdio.h>
#include <conio.h>

void plusminus(int* x, int* y){
    int z;
    z=*x;
    *x= *x+*y;
    *y= *y-z;
}

int main()
{
    int a,b;
    printf("Enter any number (a)\n");
    scanf("%d", &a);
    printf("Enter another number (b)\n");
    scanf("%d", &b);
    plusminus(&a,&b);
    printf("The value at the address of 'a' has become %d.\n", a);
    printf("The value at the address of 'b' has become %d.\n", b);
    return 0;
}