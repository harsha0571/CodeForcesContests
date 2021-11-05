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
        int n, flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] > 2 * a[i - 1] || a[i] * 2 < a[i - 1])
            {
                int add = (a[i] > a[i - 1]) ? a[i] : a[i - 1];
                int sub = (a[i] < a[i - 1]) ? a[i] : a[i - 1];
                //cout << "add:" << add << endl;
                //cout << "sub:" << sub << endl;
                while (add > sub)
                {

                    if (add % 2 == 0)
                        add /= 2;
                    else
                        add = add / 2 + 1;
                    if (add > sub)
                        flag++;
                }
            }
        }

        cout << flag << endl;
    }

    return 0;
}