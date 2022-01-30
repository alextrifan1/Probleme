#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("polybius.in");
ofstream fout("polybius.out");
char s[30], c, *q, sir[30], d;
int p, lin, col, k, fr[130], n, x, i;

int main()
{
    fin>>p;
    fin.get();
    fin.get(s, 30);
    n = strlen(s);
    if (p == 1)
    {
        for (i = 0; i < n; i++)
        {
            k = (int)s[i];
            x = i+1;
            if (x%5 == 0)
            {
                lin = x/5;
                col = 5;
            }
            else
            {
                lin = x/5+1;
                col = x%5;
            }
            fr[k] = lin*10+col;
        }
        while(fin>>c)
        {
          x = (int)c;
          fout<<fr[x];
        }
    }
    else
    {
        while (fin>>c>>d)
        {
            lin = (int)(c-'0');
            col = (int)(d-'0');
            k = 5*(lin-1)+col;
            fout<<s[k-1];
        }
    }
    fin.close();
    fout.close();
    return 0;
}
