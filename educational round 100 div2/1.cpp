#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
     long long int a,b,c,flag=0,ch=1,le;
     cin>>a>>b>>c;
    if(a>b)
            le=a;
        else
            le=b;

        if(le>c)
            le=le;
        else
            le=c;

   if(le-a>6&&le-b>6&&le-c>6)
    flag=0;
   else{
            if(a>7&&b>7&&c>7)
            {
             a=(a%6)+6;
             b=(b%6)+6;
             c=(c%6)+6;
            }

            //cout<<a<<" "<<b<<" "<<c<<endl;

     while(a!=0&&b!=0&&c!=0){
        long long int l ;

        if(a>b)
            l=a;
        else
            l=b;

        if(l>c)
            l=l;
        else
            l=c;



        if (ch%7==0&&ch!=0){
            a--;
            b--;
            c--;
        }
        else{
        if(l==a)
            a--;
        else if(l==b)
            b--;
        else if(l==c)
            c--;
        }

        cout<<a<<" "<<b<<" "<<c<<endl;

        if(a==0||b==0||c==0)
        {
           if(a==0&&b==0&&c==0)
              {
               cout<<"Yes"<<endl;
               flag=1;
              }
              break;
        }

        ch++;
      }
   }
     if(flag==0)
        cout<<"No"<<endl;

  }
}
