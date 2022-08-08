#include <stdio.h>

void ArrayReversal(int b[])
{
  int x;
  for (int i = 0; i < 7/2; i++)
  {
    x=b[i];
    b[i]=b[6-i];
    b[6-i]=x;
  }
  
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 34, 23};
    for (int i = 0; i < 7; i++)
    {
        printf("The value of array at '%d' is %d\n", i, a[i]);
    }
    printf("\n");
    ArrayReversal(a);
    printf("After running the function the array has reversed and now....\n\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of array at '%d' is %d\n", i, a[i]);
    }

    return 0;
}
