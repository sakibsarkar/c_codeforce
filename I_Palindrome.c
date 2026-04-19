#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1000];
    fgets(s, 1000, stdin);

    int s_len = strlen(s) - 1;
    s[s_len] = '\0';

    int is_palindrome = 1;
    for (int i = 0; i < s_len / 2; i++)
    {
        if (s[i] != s[s_len - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }

    printf("%s", is_palindrome ? "YES\n" : "NO\n");
    return 0;
}