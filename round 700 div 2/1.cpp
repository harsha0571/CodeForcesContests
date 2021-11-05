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
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(i==0||i%2==0)
            {
                if(s[i]==97)
                s[i]=98;
                else
                s[i]=97;
            }
            else
            {
                if(s[i]==122)
                s[i]=121;
                else
                s[i]=122;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}