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
        unsigned int n, x;
        unsigned int sum = 0, q = 0;
        cin >> n >> x;
        vector<unsigned int> v;
        unsigned int temp;
        for (unsigned int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        q = n;
        for (unsigned int i = 0; i < q; i++)
        {
            if (v[i] % x == 0)
            {
                v.insert(v.end(), x, v[i] / x);
                q += x;
            }
            else
                break;
        }

        sum = accumulate(v.begin(), v.end(), 0);
        cout << sum << endl;
    }

    return 0;
}