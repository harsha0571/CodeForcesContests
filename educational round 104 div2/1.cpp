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
        int n;
        cin >> n;
        vector<int> h;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            h.push_back(temp);
        }
        sort(h.begin(), h.end());
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            if (h[i] > h[0])
                res++;
        }
        cout << res << endl;
    }

    return 0;
}