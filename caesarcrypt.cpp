#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("caesar.in");
ofstream fout("dbftbs.out");

int main()
{
    char s[300], cuv;
    int i, j, n, x, a;
    fin.get(s, 300);
    fin.get();
    fin>>x;
    fin>>cuv;
    if (cuv == 'e')
    {

        for (i = 0; i < strlen(s); i++)
        {
            n = x;
            if (s[i] >= 65 and s[i] <= 90)
            {
                while (n)
                {
                    s[i] = s[i]+1;
                    if (int(s[i]) > 90)
                        s[i] = s[i] - 26;
                    n--;
                }
            }
            else if (s[i] >= 97 and s[i] <= 122)
            {
                 while (n)
                {
                    s[i] = s[i]+1;
                    if (int(s[i]) > 122)
                        s[i] = s[i] - 26;
                    n--;
                }
            }
        }
    }
    if (cuv == 'd')
    {
        for (i = 0; i < strlen(s); i++)
        {
            n = x;
            if (s[i] >= 65 and s[i] <= 90)
            {
                 while (n)
                {
                    s[i] = s[i]-1;
                    if (int(s[i]) < 65)
                        s[i] = s[i] + 26;
                    n--;
                }
            }
            else if (s[i] >= 97 and s[i] <= 122)
            {
                 while (n)
                {
                    s[i] = s[i]-1;
                    if (int(s[i]) < 97)
                        s[i] = s[i] + 26;
                    n--;
                }
            }
        }
    }
    fout<<s;
}

