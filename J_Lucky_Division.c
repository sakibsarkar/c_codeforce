#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int lucky[] = {
        4, 7,
        44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777};

    int is_almost_lucky = 0;

    for (int i = 0; i < 14; i++)
    {
        if (n % lucky[i] == 0)
        {
            is_almost_lucky = 1;
            break;
        }
    }

    if (is_almost_lucky)
        printf("YES");
    else
        printf("NO");

    return 0;
}