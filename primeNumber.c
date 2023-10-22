#include <stdio.h>

int main(){
    int i,j,n;
    printf("Enter a number to print all the prime numbers smaller than it\n");
    scanf("%d", &n);
    printf("%d\n", 2);
    for (i = 3;i <= n ; i++)
    {
        int flag = 0;
        for (j = 2; j < i; j++)
        {
            if(i % j == 0){
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
        }
        else{
            continue;
        }  
    }
    return 0;
}