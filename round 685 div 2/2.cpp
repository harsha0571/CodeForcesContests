#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, q = 0, s[n];
        cin >> n >> q;
        cin >> s[n];
        while (q--)
        {
            int l, r, temp, check, cur, prev, skip = 0, flag = 0, ignore = -1;
            cin >> l >> r;
            int c[r - l + 1];
            for (int i = l, j = 0; i <= r; i++, j++)
            {
                c[j] = s[i];
            }
            int j = 0;
            for (int i = 0; i < n; i++)
            {
                if (i == ignore)
                {
                    ignore = -1;
                    continue;
                }
                cur = i;
                temp = c[j];
                if (s[i] == temp && j == 0)
                {
                    j++;
                    prev = i;
                    continue;
                }
                if (s[i] == temp)
                {
                    check = cur - prev;
                    if (skip != 1)
                    {
                        if (check >= 2)
                            skip = 1;
                    }

                    j++;
                    prev = i;
                }
                if (skip == 1 && j == (r - l + 1))
                {
                    flag = 1;
                }
                else if (j == (r - l + 1))
                {
                    check = cur - prev;
                    if (check >= 2)
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        ignore = cur;
                        j--;
                    }
                }
            }
            if (flag == 1 && (r - l + 1) > 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
