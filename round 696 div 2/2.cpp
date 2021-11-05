#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>

using namespace std;
int lcm(int a, int b)
{
    int max = (a > b) ? a : b;
    do
    {
        if (max % a == 0 && max % b == 0)
        {
            break;
        }
        else
            ++max;
    } while (true);
    return max;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int d;
        cin >> d;
        int min = lcm(lcm(d, 2 * d), 3 * d);
        //int res = a > b ? b : a;

        for (int i = 2; i <= d; i++)
        {
            int temp = lcm(lcm(i, i + d), i + (2 * d));
            if (temp < min)
                min = temp;
        }
        cout << min << endl;
    }

    return 0;
}