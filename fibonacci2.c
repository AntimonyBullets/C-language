#include <stdio.h>
int main()
{
    int x;
    int a, b, c;
start:
    printf("Enter any number less than or equal to 45:");
    scanf("%d", &x);
    if (x <= 45)
    {
        printf("0,1,");
        a = 0;
        b = 1;
        for (int i = 1; i < x; i++)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%d,", c);
        }
    }
    else
    {
        printf("%d is not less than or equal to 45!\n", x);
        goto start;
    }
    
    return 0;
}