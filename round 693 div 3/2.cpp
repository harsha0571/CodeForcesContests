#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ones = 0, twos = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            temp == 1 ? ones++ : twos++;
        }

        if ((ones + twos * 2) % 2 != 0)
            cout << "NO" << endl;
        else if (ones == 0 && twos % 2 != 0)
            cout << "NO" << endl;
        else if (twos = 0 && ones % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
