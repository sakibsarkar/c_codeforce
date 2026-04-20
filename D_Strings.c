#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[1001];
    char b[1001];
    scanf("%s", a);
    scanf("%s", b);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a, b);

    char first_char_a = a[0];
    a[0] = b[0];
    b[0] = first_char_a;

    printf("%s %s", a, b);

    return 0;
}
