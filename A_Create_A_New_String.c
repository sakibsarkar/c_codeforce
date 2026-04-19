#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1002];
    char t[1001];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int s_len = strlen(s) - 1;
    int t_len = strlen(t) - 1;

    s[s_len] = '\0';
    t[t_len] = '\0';

    printf("%d %d\n", s_len, t_len);

    printf("%s %s\n", s, t);

    return 0;
}