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
        long long n, k, res = 0, sum = 0, c;
        cin >> n >> k;
        long long p[n];
        for (int i = 0; i < n; i++)
        {

            cin >> p[i];
            if (i != 0)
            {
                cout << "sum:" << sum << endl;
                c = sum / p[i];
                cout << "c:" << c << endl;
                while (c < k)
                {
                    sum++;
                    p[i]++;
                    res++;

                    c = sum / p[i];
                    //cout << "c:" << c << endl;
                }
            }
            sum += p[i];
        }
        cout << res << endl;
        //long long c = sum / p[n - 1];
        //if (c < k)
        //{
        //    long long a = k - c;
        //    sum += p[n - 1] * a;
        //}
        //res = sum - p[0];
        //cout << res << endl;
    }

    return 0;
}