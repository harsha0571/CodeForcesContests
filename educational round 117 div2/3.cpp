#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>
#include <cstdlib>
#include <map>

using namespace std;
#define endl '\n'

unsigned long long int fact(unsigned long long int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int k, x;
        cin >> k >> x;
        if ((x <= (2 * fact(k / 2))) && (x > (2 * fact((k - 1) / 2))))
            cout << fact(k) << endl;
        else
            cout << fact(k - 1) << endl;
    }

    return 0;
}