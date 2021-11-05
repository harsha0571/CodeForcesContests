#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v = {0};
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            v[b]++;
        }
        for (int i = 1; i < (2 * n) + 1; i++)
        {
            if (v[i] > 1 && v[i + 1] == 0)
                sum += 2;
            else if (v[i] > 1 && v[i + 1] == 1 && v[i + 2] == 0)
                sum += 2;
            else if (v[i] > 1 && i == 2 * n)
                sum += 2;
            else if (v[i] > 0)
                sum++;
        }
        cout << sum << endl;
    }

    return 0;
}