#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
   while(t--){
        int n,c=0,s=0;
        cin>>n;
        if(n%2!=0)
            {for(int i=1;i<=n;i++){
            s=floor(n/2)+1;
            if(i==1)
              {c=2;
              cout<<2<<" ";}
            else if(i==s)
              cout<<n<<" ";
            else if(i==3&&n==3)
              cout<<1<<" ";
            else if(i==s-1&&n!=3)
              cout<<1<<" ";
            else if(i!=s)
                {cout<<c+1<<" ";
                c++;}

             }
            }
        else
            {for(int i=1;i<=n;i++){
            if(i%2==0)
            cout<<i-1<<" ";
            else
            cout<<i+1<<" ";
            }}

    }
}
