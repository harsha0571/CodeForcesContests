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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 9;

        for (int i = 0; i < n; i++)
        {
            cout << a;
            a--;
            if (a < 0)
            {
                a = 9;
            }
        }
        cout << endl;
    }

    return 0;
}