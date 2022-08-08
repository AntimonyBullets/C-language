#include <stdio.h>
#include <string.h>

int main()
{
    char a1[] = "Lionel ";
    char a2[] = "Messi";
    char a3[60];

    // The command "strlen" gives the length of the string
    printf("The length of the string 'Lionel ' is %d\n", strlen(a1));
    printf("The length of the string 'Messi' is %d\n", strlen(a2));

    // The command "strcmp" gives the difference of first letters of two strings
    printf("The 'strcmp' command will give %d as the difference between the strings 'Lionel ' and 'Messi'\n", strcmp(a1, a2));

    // The command "strcat" combines two strings and "strcpy" copies one string in another
    strcpy(a3, strcat(a1, a2));
    puts(a3);

    // The command "strrev" reverses the string in the output
    printf("The reverse of the string 'Lionel Messi' is\n");
    puts(strrev(a3));
}
