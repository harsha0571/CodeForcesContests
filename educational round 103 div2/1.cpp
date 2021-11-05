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
        unsigned long long n, k;
        cin >> n >> k;
        unsigned long long a = k;
        if (n == k)
            cout << 1 << endl;
        else if (n < k)
        {
            if (k % n == 0)
                cout << (k / n) << endl;
            else
                cout << (k / n) + 1 << endl;
        }
        else
        {
            while (n > k)
            {
                k += a;
                //cout << "pk:" << k << endl;
            }
            //cout << "k:" << k << endl;
            if (n == k)
                cout << 1 << endl;
            else if (k % n == 0)
                cout << (k / n) << endl;
            else
                cout << (k / n) + 1 << endl;
        }
    }

    return 0;
}