#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        long long n, x, max = 0, sum = 0;
        cin >> n >> x;
        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        for (long long i = 0; i < n; i++)
        {
            if (v[i] % x == 0)
                max += (v[i] / x);
            else
                max += ((v[i] / x) + 1);

            sum += v[i];
        }
        if (sum % x == 0)
            cout << sum / x << " " << max << endl;
        else
        {
            cout << (sum / x + 1) << " " << max << endl;
        }
    }

    return 0;
}