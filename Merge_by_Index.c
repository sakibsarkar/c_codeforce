#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1005], s2[1005];

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    int start, end;
    scanf("%d %d", &start, &end);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    printf("%s", s1);

    int len = strlen(s2);

    if (start < 0)
    {
        start = 0;
    }
    if (end >= len)
    {
        end = len - 1;
    }

    for (int i = start; i <= end; i++)
    {
        printf("%c", s2[i]);
    }

    return 0;
}