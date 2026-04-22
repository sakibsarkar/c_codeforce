#include <stdio.h>
#include <stdlib.h>
int main()
{
    int freq[26] = {0};

    printf("%d", 'a' - 'a');
    return 0;
    char s[10000001]; // up to 10^7 + 1
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}