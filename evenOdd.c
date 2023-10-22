#include<stdio.h>

int main(){
    int a;
    printf("Enter a number (to know whether it is 'even' or 'odd')\n");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("The number you entered is even.");
    }
    else{
        printf("The number you entered is odd.");
    }
    return 0;
}