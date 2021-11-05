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
        int A, B, n;
        cin >> A >> B >> n;
        int a[n], b[n], flag = 0, res = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            z = (b[i] % A == 0) ? (b[i] / A) : ((b[i] / A) + 1);

            //cout << "N:" << z << endl;
            while (B > 0 && z > 0)
            {
                B -= a[i];
                b[i] -= A;
                z--;
            }
            if (z != 0)
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            res += b[i];
        }
        //cout << "B:" << B << endl;
        //cout << "res:" << res << endl;
        if (res < 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}