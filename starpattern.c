#include <stdio.h>
#include <conio.h>

void tri();
void rev_tri();
int main()
{
    int x, y, z;
iterate:
start:
    printf("Enter '0' to print triangular star pattern and '1' to print reversed triangular star pattern\n");
    scanf("%d", &x);

    if (x == 0)
    {
        printf("How many lines do you want to print?\n");
        scanf("%d", &y);
        printf("The triangular star pattern is given below\n\n");
        tri(y);
    }
    else if (x == 1)
    {
        printf("How many lines do you want to print?\n");
        scanf("%d", &z);
        printf("The reversed triangular pattern is given below\n\n");
        rev_tri(z);
    }
    else
    {
        printf("Invalid Command!\n");
        goto start;
    }
    goto iterate;

    return 0;
}
void tri(int y)
{
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
};
void rev_tri(int z)
{
    for (int k = z; k >= 1; k--)
    {
        for (int l = k; l >= 1; l--)
        {
            printf("*");
        }
        printf("\n");
    }
};
