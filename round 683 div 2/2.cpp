#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int nm[t - 1][1];
    for (int tc = 0; tc < t; tc++)
    {
        cin >> nm[tc][0];
        cin >> nm[tc][1];
    }
    for (int tc = 0; tc < t; tc++)
    {
        cout << nm[tc][0] << endl;
        cout << nm[tc][1] << endl;
    }
}
