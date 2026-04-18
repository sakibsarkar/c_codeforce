#include <stdio.h>

int main(void)
{
    int numb;
    scanf("%d", &numb);

    int first = numb / 10;
    int last = numb % 10;
    if (first == 0 || last == 0 || first % last == 0 || last % first == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
