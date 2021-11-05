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
        long long n, k;
        cin >> n >> k;
        long long res = 0;
        if (n % 2 == 0)
        {
            if (n > k)
                res = k;
            else
            {
                res = (k % n == 0) ? n : k % n;
            }
        }
        else
        {
            long long pos = 0, add = 0;
            long long rep = n / 2, first = n / 2, gap = n / 2 - 1;
            if (k <= rep * n)
            {
                pos = k;
            }
            else
            {
                pos = (k % (rep * n) == 0) ? rep * n : k % (rep * n);
            }

            long long a = pos - first;
            long long b = gap + 1;

            if (a % b == 0)
                add = a / b;
            else
                add = a / b + 1;

            if (n > pos)
            {
                res = pos + add;
                res %= n;
                if (res == 0)
                    res = n;
            }
            else
            {
                res = (pos % n == 0) ? n : pos % n;
                res += add;
                res %= n;
                if (res == 0)
                    res = n;
            }
        }
        cout << res << endl;
    }

    return 0;
}