
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
        vector<int> v(4, 0);
        v[0] = 2;
        v[2] = 4;
        for (int i = 0; i < 5; i++)
            cout << v[i];
    }

    return 0;
}
