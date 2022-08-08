#include <stdio.h>
#include <math.h>

int main()
{
    // do while loop

    int a, d, n;
    printf("Enter the first term of A.P.\n");
    scanf("%d", &a);

    printf("Enter the common difference of A.P.\n");
    scanf("%d", &d);

    printf("Enter the number of terms of A.P.\n");
    scanf("%d", &n);
    printf("\n");
    printf("According to the given values, the Arithmetic Progression is\n");

    int z = a + n * d - d;

    do
    {
        printf("%d\n", a);
        a = a + d;
    } while (a <= z);

    // for loop

    int i, r, m;
    printf("Enter the first term of G.P.\n");
    scanf("%d", &i);

    printf("Enter the common ratio of G.P.\n");
    scanf("%d", &r);

    printf("Enter the number of terms of G.P.\n");
    scanf("%d", &m);
    printf("\n");
    printf("According to the given values, the Geometric Progression is\n");

    int x;
    x = pow(r, m - 1);
    int y;
    y = i * x;

    for (i; i <= y; i = i * r)
    {
        printf("%d\n", i);
    }

    return 0;
}
