#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int is_palindrome = 1;

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }

    printf(is_palindrome ? "YES" : "NO");

    return 0;
}
