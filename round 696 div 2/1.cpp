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
        int n;
        string b;

        cin >> n >> b;
        int a[n] = {0};
        b[0]++;
        a[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (b[i - 1] - b[i] == 1)
            {
                a[i] = 0;
            }
            else
            {
                a[i] = 1;
                b[i]++;
            }
        }
        for (int i = -0; i < n; i++)
            cout << a[i];

        cout << endl;
    }

    return 0;
}