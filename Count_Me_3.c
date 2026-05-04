#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", s);
        int small_char_cout = 0;
        int capital_char_cout = 0;
        int numeric_char_cout = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small_char_cout++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital_char_cout++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                numeric_char_cout++;
            }
        }
        printf("%d %d %d\n", capital_char_cout, small_char_cout, numeric_char_cout);
    }

    return 0;
}
