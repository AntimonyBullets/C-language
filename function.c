#include <stdio.h>
#include <math.h>

float slope(){
    float x,y,a,b;
    float X,Y;
    printf("Enter the first x coordinate and first y coordinate respectively\n");
    scanf("%f\n %f", &x, &y);
    printf("Enter the second x coordinate and second y coordinate respectively\n");
    scanf("%f\n %f", &a,&b);
    X=a-x;
    Y=b-y;

    return Y/X;
}
int main(){

    float c;
    c = slope();
    printf("The slope of line joining the given points is %.2f\n",c);
    return 0;
}