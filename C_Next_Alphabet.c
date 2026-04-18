#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);
    printf("%c", c == 'z' ? 'a' : c + 1);
    return 0;
}
