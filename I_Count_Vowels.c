#include <stdio.h>

int main(void)
{
    int vowels[5] = {65, 69, 73, 79, 85};
    char s[201];
    fgets(s, 201, stdin);
    int vowel_count = 0;
    for (int i = 0; s[i] != '\n'; i++)
    {
        int ascii = s[i] - '\0';
        int oposite_case_char_ascii = s[i] < 'Z' ? ascii + 32 : ascii - 32;
        for (int j = 0; j < 5; j++)
        {
            if (vowels[j] == ascii || vowels[j] == oposite_case_char_ascii)
            {
                vowel_count++;
            }
            /* code */
        }
    }

    printf("%d", vowel_count);

    return 0;
}
