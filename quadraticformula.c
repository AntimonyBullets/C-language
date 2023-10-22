#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float r1,r2;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);

    float discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        r1 = (sqrt(discriminant) - b)/(2*a);
        r2 = (0 - sqrt(discriminant)- b)/(2*a);
        printf("The roots of the give equation are --> %f and %f", r1, r2);
    }
    else{
        float comDiscriminant = -1 * discriminant;
        printf("The roots are (-%f + %fi)/%d and (-%f + %fi)/%d", b, comDiscriminant, 2*a, b, comDiscriminant, 2*a);
    }
    return 0;
}