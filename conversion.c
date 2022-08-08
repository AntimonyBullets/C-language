#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    float k,m,i,j;
    printf("Which type of unit conversion do you want?\n");
    printf("Give the command '1' if you want to change kilometer to mile\n");
    printf("Give the command '2' if you want to change meter to centimeter\n");
    printf("Give the command '3' if you want to change inch to feet\n");
    printf("Give the command '4' if you want to change joule to kilojoule\n\n");
    start:
    printf("Enter the command here (according to type of conversion you wanna do)");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Enter the value (in kms)");
        scanf("%f", &k);
        printf("%.2f kilometers is equal to %.2f", k,k*0.621371);
    }
    else if (a == 2)
    {
        printf("Enter the value (in meters)");
        scanf("%f", &m);
        printf("%.2f meters is equal to %.2f centimeters",m, m*100);
    }
    else if (a == 3)
    {
        printf("Enter the value (in inches)");
        scanf("%f", &i);
        printf("%.2f inches is equal to %.2f feets",i,i/12);
    }
    else if (a == 4)
    {
        printf("Enter the value (in joules)");
        scanf("%f", &j);
        printf("%.2f joule is equal to %.2f kilojoule",j, j/1000);
    }
    else{
        printf("Enter a valid command!");
        printf("\n");
        goto start;
    }
    

    return 0;
}
