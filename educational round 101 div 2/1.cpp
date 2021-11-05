#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int pos1, pos2, bg, al, m, a;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                pos1 = i;
            else if (s[i] == ')')
                pos2 = i;
        }

        if (pos1 < pos2)
        {
            a = pos1;
            m = pos2 - pos1 - 1;
            al = s.length() - pos2 - 1;
        }
        else
        {
            a = pos2;
            m = pos1 - pos2 - 1;
            al = s.length() - pos1 - 1;
        }

        bg = a;

        
        if (!(s.length() % 2 == 0))
            cout << "NO" << endl;
        else if (pos2 < pos1 && (bg == 0 || al == 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}