#include <stdio.h>

int main(void)
{
    int vowels_ascii_decimal[5] = {97, 101, 105, 111, 117};

    char s[100001];
    scanf("%s", s);

    int total_consonants = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int isVowel = 0;
        for (int j = 0; j < 5; j++)
        {
            if (s[i] == vowels_ascii_decimal[j])
            {
                isVowel = 1;
                break;
            }
        }

        if (!isVowel)
        {
            total_consonants++;
        }
    }
    printf("%d", total_consonants);

    return 0;
}
