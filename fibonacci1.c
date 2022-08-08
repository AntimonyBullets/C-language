#include <stdio.h>

int fibonacci(int a)
{
    if (a == 0 || a == 1)
    {
        return a;
    }
    else
    {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
};

int main()
{
    int b;
start:
    printf("Enter any number less than or equal to 45 ");
    scanf("%d", &b);
    if (b <= 45)
    {
        printf("F[%d]=%d\n", b, fibonacci(b));
    }
    else
    {
        printf("%d is not less than or equal to 45!\n", b);
        goto start;
    }

    return 0;
}
// Fibonacci number can also be obtained iteratively which is  faster than this recursive process.
