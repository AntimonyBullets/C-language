#include <stdio.h>

int main(){
    int h,m;
    printf("You have to enter the 'time' in hours and minutes\n");
    printf("Enter hours\n");
    scanf("%d", &h);
    printf("Enter minutes\n");
    scanf("%d", &m);
    printf("This is the 'time' you have entered --> %d minutes\n", h*60 + m);
    return 0;
}