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
        int n, d, flag = 0, temp = 0, sum = 0, check = 0;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d)
                check = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < d)
            {
                temp = a[i];
                for (int j = 0; j < n; j++)
                {
                    if (j == i)
                        continue;
                    else
                    {
                        sum = temp + a[j];
                        if (sum <= d)
                        {
                            flag = 1;
                            break;
                        }
                        sum = 0;
                    }
                }
                if (flag == 1)
                    break;
            }
        }
        if (flag == 1 || check == 0)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}