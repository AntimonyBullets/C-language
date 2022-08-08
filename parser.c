#include <stdio.h>
#include <string.h>

void parser(char *s)
{
    int x = 0, y = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '<')
        {
            x = 1;
            continue;
        }
        else if (s[i] == '>')
        {
            x = 0;
            continue;
        }
        if (x == 0)
        {
            s[y] = s[i];
            y++;
        }
    }
    s[y] = '\0';
    while (s[0] == ' ')
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i] = s[i + 1];
        }
    }
    while (s[strlen(s) - 1] == ' ')
    {
        s[strlen(s) - 1] = '\0';
    }
}
void heading(char *s1)
{
    if (s1[0] == '<' && s1[1] == 'h' && s1[2] == '1' && s1[3] == '>' && s1[strlen(s1) - 1] == '>' && s1[strlen(s1) - 2] == '1' && s1[strlen(s1) - 3] == 'h' && s1[strlen(s1) - 4] == '/' && s1[strlen(s1) - 5] == '<')
    {
        parser(s1);
        printf("The string is parsed into '%s'\n", s1);
    }
    else
    {
        printf("The string can not be parsed!\n");
    }
}
int main(int argc, char const *argv[])
{
    char S[] = "<h1> This is the content inside h1 tag </h1>";
    heading(S);
    return 0;
}

