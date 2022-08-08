#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char O;
    float o1, o2;
    printf("Enter the operator (+,-,*,/) according to the arithmetic operation you wanna do: ");
    scanf("%c", &O);
    printf("Enter both the operands respectively: ");
    scanf("%f %f", &o1, &o2);
    switch (O)
    {
    case '+':
        printf("%f + %f = %f\n", o1, o2, o1 + o2);
        break;
    case '-':
        printf("%f - %f = %f\n", o1, o2, o1 - o2);
        break;
    case '*':
        printf("%f * %f = %f\n", o1, o2, o1 * o2);
        break;
    case '/':
        printf("%f / %f = %f\n", o1, o2, o1 / o2);
        break;

    default:
        printf("You must enter a valid operator!\n");
        break;
    }
    return 0;
}
