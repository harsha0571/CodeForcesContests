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
        int n, flag = 0;
        ;
        cin >> n;
        if (n < 2020)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i <= 1000; i++)
            {
                for (int j = 0; j <= 1000; j++)
                {
                    if (n == (2020 * i + 2021 * j))
                    {
                        cout << "YES" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (!flag)
                cout << "NO" << endl;
        }
    }

    return 0;
}