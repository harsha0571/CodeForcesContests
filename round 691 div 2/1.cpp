#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
     int n;
     string r,b,x,y;
     cin>>n;
     cin>>r>>b;
     cout<<r[3];
     int rr=0,rb=0,res1=0,res2=0;
     for(int i=0;i<=n;i++){
            x=b;
      for(int j=0;j<=n;j++){
            stringstream ex1(r);
            stringstream ex2(x);
            ex1 >> res1;
            ex2 >> res2;
            cout<<res1<<endl;
            cout<<res2<<endl;
            char temp = x[j];
            x[j]=x[n];
            x[j]=temp;
      }
      char temp2 = r[i];
            r[i]=r[n];
            r[i]=temp2;
     }

    }
}
