#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1002];
    fgets(s, 1002, stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    printf("%s", s);
    return 0;
}