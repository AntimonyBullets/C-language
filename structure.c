#include <stdio.h>
#include <string.h>

struct Details
{
    char name[20];
    char dl[20];
    char route[20];
    int dis;
};

int main()
{
    struct Details a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the details for driver No.%d\n", i+1);
        printf("Name: ");
        scanf("%s", &a[i].name);
        printf("Driving license detail: ");
        scanf("%s", &a[i].dl);
        printf("Route: ");
        scanf("%s", &a[i].route);
        printf("Distance: ");
        scanf("%d", &a[i].dis);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("The details of the the driver No.%d are given below\n", i+1);
        printf("Name ==> %s\n", a[i].name);
        printf("Driving license detail ==> %s\n", a[i].dl);
        printf("Route ==> %s\n", a[i].route);

        printf("Distance ==> %d\n", a[i].dis);
    }

    return 0;
}
