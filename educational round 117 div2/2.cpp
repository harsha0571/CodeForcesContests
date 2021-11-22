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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> aof, bof;
        aof.push_back(a);
        bof.push_back(b);
        for (int i = 1; i < a; i++)
        {
            if (i != b)
            {
                bof.push_back(i);
                // cout << "inserted in bof 1 " << i << endl;
            }
        }

        for (int i = b + 1; i <= n; i++)
        {
            if (i != a)
            {
                aof.push_back(i);
                // cout << "inserted in aof 1 " << i << endl;
            }
        }

        int temp = a + 1;
        for (int i = a + 1; aof.size() < n / 2; i++)
        {
            if (i != b)
            {
                aof.push_back(i);
                // cout << "inserted in aof 2 " << i << endl;
                temp = i + 1;
            }
        }

        for (int i = temp; i < b; i++)
        {
            if (i != b)
            {
                bof.push_back(i);
                // cout << "inserted in bof 2  " << i << endl;
            }
        }

        // cout << "aof:" << endl;
        // for (int i = 0; i < n / 2; i++)
        //     cout << aof[i] << " ";
        // cout << endl;
        // cout << "bof:" << endl;
        // for (int i = 0; i < n / 2; i++)
        //     cout << bof[i] << " ";
        // cout << endl;
        if ((aof.size() == n / 2) && (bof.size() == n / 2))
        {
            for (int i = 0; i < n / 2; i++)
                cout << aof[i] << " ";
            for (int i = 0; i < n / 2; i++)
                cout << bof[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}