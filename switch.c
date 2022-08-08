#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter density of the fluid (in kg per meter cubed)\n ");
    scanf("%d", &a);
    

    switch (a)
    {
    case 1000:
        printf("The fluid is 'Water'\n");
        printf("Enter the mass of water (in kg)\n");
        scanf("%d", &b);

        // switch ke andar switch

        switch (b)
        {
        case 250:
            printf("The volume is 0.25 meters cubed\n");
            break;
        case 500:
            printf("The volume is 0.5 meters cubed\n");
            break;
        case 1000:
            printf("The volume is 1 meter cubed\n");
            break;
        
        default:printf("Nothing to see here...\n");
            break;
        }
        break;
    case 1030:
        printf("The fluid is 'Sea Water'\n");
        break;
    case 13600:
        printf("The fluid is 'Mercury'\n");
        break;
    case 1060:
        printf("The fluid is 'Whole Blood'\n");
        break;
    case 1106:
        printf("The fluid is 'Heavy water'\n");
        break;
    
    default:
        printf("Not a common fluid\n");
    }

    return 0;
}
