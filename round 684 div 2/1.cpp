#include <iostream>

using namespace std;

int main()
{
    int t=0;
    int n,c0,c1,h;

    cin>>t;
    for(int tc=0;tc<t;tc++){
        int zero=0,one=0;
        long long int cost=10000000;
        cin >> n >> c0 >> c1 >> h ;
        char s[n];
        cin >> s;

        for(int j=0;j<n;j++){
            if(s[j]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }

        }

        for(int i=0;i<=n;i++){
           int add = 0;
           if(n-i>zero)
           {
             add = (n-i) - zero ;
           }
           else
           {
               add = i - one ;
           }
           int temp = (n-i)*c0 + i*c1 + add*h;

            if(temp<cost){
                cost=temp;
            }

        }
        cout << cost << endl;



    }
}
