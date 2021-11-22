#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>
#include <cstdlib>

using namespace std;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y;
        int flag = 0;
        float m = abs(x + y) / 2;
        for (float i = 0, j = m; i <= m, j >= 0; i++, j--)
        {
            if ((float(abs(x - i)) + float(abs(y - j))) == m)
            {
                a = i;
                b = j;
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << a << " " << b << endl;
        else
            cout << -1 << " " << -1 << endl;
    }

    return 0;
}