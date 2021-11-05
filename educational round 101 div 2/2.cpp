#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        int n, sum = 0;
        cin >> n;
        int r[n];
        int m;
        cin >> m;
        int b[m];
        int c[n + m] = {};

        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int j = 0, z = 0, x = 0;
        for (int i = 0; i < n + m; i++)
        {
            if (r[j] > b[z])
            {
                int a = r[j];
                if (a >= 0)
                {
                    sum += a;
                    c[x] += sum;
                    x++;
                    j++;
                }
                else
                {
                    if (j + 1 < n && z + 1 < m)
                    {
                        int p = a + r[j + 1];
                        int q = b[z] + b[z + 1];
                        if (p > q)
                        {
                            sum += p;
                            c[x] += sum;
                            x++;
                            j += 2;
                        }
                        else
                        {
                            sum += q;
                            c[x] += sum;
                            x++;
                            z += 2;
                        }
                    }
                    else
                    {
                        sum += a;
                        c[x] = +sum;
                        x++;
                        j++;
                    }
                }
            }
            else
            {
                int a = b[z];
                if (a >= 0)
                {
                    sum += a;
                    c[x] += sum;
                    x++;
                    z++;
                }
                else
                {
                    if (j + 1 < n && z + 1 < m)
                    {
                        int p = a + b[z + 1];
                        int q = r[j] + r[j + 1];
                        if (p > q)
                        {
                            sum += p;
                            c[x] += sum;
                            x++;
                            z += 2;
                        }
                        else
                        {
                            sum += q;
                            c[x] += sum;
                            x++;
                            j += 2;
                        }
                    }
                    else
                    {
                        sum += a;
                        c[x] = +sum;
                        x++;
                        z++;
                    }
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n + m; i++)
        {
            if (c[i] > res)
                res = c[i];
        }
        cout << res << endl;
    }

    return 0;
}