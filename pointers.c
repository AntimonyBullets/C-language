#include <stdio.h>
#include <conio.h>


int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d", &a);
    int* x=&a;
    int* y=&*x;
    printf("The number you have entered is %d\n", a);
    printf("The address (in hexadecimal form) of the number you have entered is %x\n", x);
    printf("The address of the memory location which comes just before the memory location of the number you have entered is %x\n", x-1);
    printf("The address of the memory location which stores the adress of the number you have entered is %x\n", &x);
    printf("%x is equal to %x\n", x,y);
    printf("%x is equal to %x\n",a,*y);
    return 0;
}
