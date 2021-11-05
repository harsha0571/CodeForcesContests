#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        long long flag = 0;

        if (n % 2 != 0)
            cout << "YES" << endl;
        else
        {
            for (long long i = 2; i <= n; i *= 2)
            {
                if (n == i)
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}