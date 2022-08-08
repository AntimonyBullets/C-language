#include <stdio.h>

int main(){
    int a,b;
    printf("Enter your phyiscs's marks out of 100\n");
    scanf("%d", &a);
    
    printf("Enter your chemistry's marks out of 100\n");
    scanf("%d", &b);

    if ((a>=33)&&(b>=33))
    {
        printf("Congratulaions! You have won hundred rupees\n");

        // Nestedif
        int c;
        printf("Now enter any prime number smaller than 20\n");
        scanf("%d", &c);
        if (c==2,3,5,7,11,13,17,19)
        {
           printf("Isme konsi badi baat hai, prime number to sabko hi pata hai\n");
        }
        else{
            printf("A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.\n");
        }
        

    }
    else if((a>=33)&&(b<33)){
        printf("Congratulations! You have won 10 rupees\n");
    }
    else if((a<33)&&(b>=33)){
        printf("Congratulations! You have won 12 rupees\n");
    }
    else{
        printf("Get out of here!\n");
    }
    
    return 0;
}