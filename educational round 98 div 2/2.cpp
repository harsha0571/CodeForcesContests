#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t=0;
     cin>>t;
     while(t--){
        long long int n=0,m=100000000000,m2=0,m3=0,c1=0,c2=0,c3=0,i=0,sum =0,x=0,res=0,res2=0 ;
        cin>>n;
        long long int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<m){
                m=arr[i];
                c1=i;
            }
            if(arr[i]>m2){
                m2=arr[i];
                c2=i;
            }
        }

        for(i=0;i<n;i++){
            if(i==c2)
                continue;
            if(arr[i]>m3){
                m3=arr[i];
                c3=i;
            }
        }

        for(i=0;i<n;i++){
            if(i==c2||i==c3)
                continue;
            else
            {
              sum += (arr[i]-m3);
            }
        }
        res2=abs(sum+m);
        x=abs(sum-m2);
        res=abs(n-x-1);
         if(res2>res)
            cout<<res2<<endl;
         else
            cout<<res<<endl;

     }
}
