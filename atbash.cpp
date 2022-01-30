#include <fstream>
using namespace std;
ifstream fin("atbash.in");
ofstream fout("atbash.out");

int main()
{
    char s, x;
    while (fin>>s)
    {
        if ((int)s <= 77)
            x =65 + 25 - (int)(s-65);
        else 
            x = 90 - 25 -(int)(s-90);
        fout<<x;
    }

    return 0;
}
