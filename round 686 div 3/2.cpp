#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n,l=1000000,flag=0;
        cin>>n;
        int a[n],c[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            int in = a[i];
            c[in]++;
        }

        for(int i=0;i<n+1;i++){
            if(c[i]==1&&i<l)
            {l=i;
            flag=1;}
        }

          //if(n==1)
           // cout<<1<<endl;
           if(flag==0)
            cout<<-1<<endl;
          else
            {for(int i=0;i<n;i++){
            if(a[i]==l)
              cout<<i+1<<endl;}
            }
    }
}
