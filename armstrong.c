#include <stdio.h>

int main(){
    int i,x;
    int sum = 0;
    printf("Enter a number to check whether it's an armstrong no. or not\n");
    scanf("%d", &x);
    int originalX = x;
    while(x != 0){
        i = x % 10;
        sum = sum + (i*i*i);
        x = x / 10;
    }
    if(sum == originalX){
        printf("%d is an armstrong no.\n", originalX);
    }
    else{
        printf("%d is not an armstrong no.\n", originalX);
    }
    return 0;
}