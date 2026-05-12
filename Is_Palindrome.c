#include <stdio.h>
#include <string.h>

int is_palindrome(char *str)
{
    int is_palindrome = 1;

    for (int i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[strlen(str) - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    return is_palindrome;
}

int main(void)
{
    char str[10001];
    scanf("%s", str);
    printf("%s", is_palindrome(str) ? "Palindrome" : "Not Palindrome");

    return 0;
}
