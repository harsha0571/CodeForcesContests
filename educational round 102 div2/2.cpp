#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>

using namespace std;
int lcm(int a, int b)
{
    int max = (a > b) ? a : b;
    do
    {
        if (max % a == 0 && max % b == 0)
        {
            break;
        }
        else
            ++max;
    } while (true);

    return max;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s, t, l, h;
        int flag = 0;
        cin >> s >> t;
        int a = s.length();
        int b = t.length();
        if (a > b)
        {
            h = s;
            l = t;
        }
        else
        {
            h = t;
            l = s;
        }

        string res = h.substr(0, l.length());
        if (res != l)
            flag = 1;
        //cout << "res:" << res << endl;
        int z = lcm(a, b) / l.length();
        string check;
        for (int i = 0; i < z; i++)
            check += res;

        //cout << "check:" << check << endl;

        for (int i = 0; i < check.length(); i += h.length())
        {
            string r = check.substr(i, h.length());
            if (r != h)
                flag = 1;
        }
        if (flag == 0)
            cout << check << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}