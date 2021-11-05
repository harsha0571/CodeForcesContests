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
        int n, h = 0, v = 0, check = 1;
        cin >> n;
        vector<int> vec;
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (vec[i] > vec[i + 1] && vec[i] > vec[i - 1])
            {
                b[i] = 1;
                h++;
            }
            else if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1])
            {
                b[i] = 2;
                v++;
            }
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (b[i] == 1 && b[i + 1] == 2 && b[i + 2] == 1)
            {
                check = 3;
                break;
            }
            else if (b[i] == 2 && b[i + 1] == 1 && b[i + 2] == 2)
            {
                check = 3;
                break;
            }
            else if (b[i] == 1 && b[i + 1] == 2)
            {
                check = 2;
            }
            else if (b[i] == 2 && b[i + 1] == 1)
            {
                check = 2;
            }
        }
        if (v + h == 0)
            cout << v + h << endl;
        else
            cout << v + h - check << endl;
    }

    return 0;
}