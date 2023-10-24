#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    float r1,r2;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    float discriminant = (b*b) - (4*a*c);

    if(discriminant >= 0){
        r1 = (sqrt(discriminant) - b)/(2*a);
        r2 = (0 - sqrt(discriminant)- b)/(2*a);
        printf("The roots of the give equation are --> %f and %f", r1, r2);
    }
    else{
        float posDiscriminant = sqrt(-1 * discriminant)/(2*a);
        float posB = -1*b/(2*a);
        if(posB == 0){
            printf("The roots are -%fi and %fi", posDiscriminant, posDiscriminant);
        }
        else{
        printf("The roots are (%f - %fi) and (%f + %fi)", posB, posDiscriminant, posB, posDiscriminant);
        }
    }
    return 0;
}