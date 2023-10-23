#include <stdio.h>

int main(){
    int n;
    printf("Enter a number to print it's factorial\n");
    scanf("%d", &n);
    for (int i = n - 1; i >= 1; i--)
    {
        n = n * i;
    }
    printf("The factorial of the number you had entered is --> %d", n);
    return 0;
}