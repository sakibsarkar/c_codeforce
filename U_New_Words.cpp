#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class EGYPT
{
public:
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    EGYPT()
    {
    }
};

int main()
{

    string s;
    cin >> s;

    EGYPT egypt;

    for (int i = 0; i < s.length(); i++)
    {
        char c = tolower(s[i]);
        if (c == 'e')
        {
            egypt.e++;
        }
        else if (c == 'g')
        {
            egypt.g++;
        }
        else if (c == 'y')
        {
            egypt.y++;
        }
        else if (c == 'p')
        {
            egypt.p++;
        }
        else if (c == 't')
        {
            egypt.t++;
        }
    }

    cout << min({egypt.e, egypt.g, egypt.y, egypt.p, egypt.t}) << endl;
    return 0;
}