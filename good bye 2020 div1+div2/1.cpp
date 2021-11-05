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
        int n;
        vector<int> v;
        set<int> s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        for (int i = n - 1; i >= 1; i--)
        {
            int j = 0;
            while (j != i)
            {
                int b;
                b = v[i] - v[j];
                s.insert(b);
                j++;
            }
        }

        cout << s.size() << endl;
    }
    return 0;
}
