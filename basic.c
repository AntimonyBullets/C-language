#include <stdio.h>
#include <math.h>
int main()
{
    float a, r;
    int n;
start:
    printf("Enter the first term of G.P.\n");
    scanf("%f", &a);

    printf("Enter the common ratio of G.P.\n");
    scanf("%f", &r);

    printf("Enter the number of terms of G.P.\n");
    scanf("%d", &n);

    float p, q, s, t;
    p = pow(r, n - 1);
    q = pow(r, n);
    s = a - a * q;
    t = 1 - r;

    printf("The nth term of the G.P. is %.4f\n", a * p);
    printf("The sum of all terms of the G.P. is %.4f\n", s / t);
    printf("\n");
    goto start;

    return 0;
}
