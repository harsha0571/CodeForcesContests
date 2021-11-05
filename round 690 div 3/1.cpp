#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        long long int a[n+1];
        int x=0,y=1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int j=1;j<=n;j++){
            if(j%2==0)
            {cout<<a[n-x]<<" ";
            x++;}
            else
            {
                cout<<a[y]<<" ";
                y++;
            }
        }
        cout<<endl;

    }

}
