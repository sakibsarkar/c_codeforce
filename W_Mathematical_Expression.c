#include <stdio.h>

int main(void)
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    switch (s)
    {
    case '+':
        printf(a + b == c ? "Yes" : "%d", a + b);
        break;

    case '-':
        printf(a - b == c ? "Yes" : "%d", a - b);
        break;

    case '*':
        printf(a * b == c ? "Yes" : "%d", a * b);
        break;

    default:
        break;
    }

    return 0;
}
