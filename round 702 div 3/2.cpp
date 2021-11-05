#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>

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
        int n;
        cin >> n;
        int a[n];

        int c[3] = {0};
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];

            if (a[i] % 3 == 0)
                c[0]++;
            else if (a[i] % 3 == 1)
                c[1]++;
            else
                c[2]++;
        }
        int max = 0, no;
        for (int i = 0; i < 3; i++)
        {
            if (c[i] > max)
            {
                max = c[i];
                no = c[(i + 2) % 3];
            }
        }
        int chk = 0;
        for (int i = 0; i < 3; i++)
        {
            if (c[i] == max)
                chk++;
        }
        if (chk == 2)
        {
            for (int i = 0; i < 3; i++)
            {
                if (c[i] != max)
                    no = c[i];
            }
        }
        int res = max - no;
        cout << res << endl;
    }

    return 0;
}