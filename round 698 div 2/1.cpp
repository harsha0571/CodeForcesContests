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
        int n, res = 0;
        cin >> n;
        int a[n + 1];
        int b[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (b[i] > res)
            {
                res = b[i];
            }
        }
        cout << res << endl;
    }

    return 0;
}