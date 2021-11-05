#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

long long div(long long z)
{
    long long c = 0;
    while (z % 2 == 0)
    {
        z /= 2;
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h, n, resw = 0, resh = 0, res = 0;
        cin >> w >> h >> n;

        if (w % 2 == 0)
            resw += div(w);

        if (h % 2 == 0)
            resh += div(h);

        res = pow(2, resh + resw);

        if (res >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
