#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int flag1=0,flag2=0,flag3=0,j=0,ch[n]={0};
    for(int i=0;i<=n;i++){
        if(a[i]=='2')
         {
           if(a[i+1]=='0')
           { flag1=1;
             ch[j]=i+1;
             i++;
             j++;
           }
         }
        }

    if(a[n-2]=='2'&&a[n-1]=='0')
        {flag2=1;}


    for(int z=0;z<n;z++){

        if(ch[z]!=0&&ch[z]!=n-1)
            {flag3=1;
            }
    }

 if(n>=4){
    if(a[2]=='2'&&a[3]=='0'&&a[0]=='2'&&a[1]=='0')
     cout<<"yes"<<endl;
    else if(flag2==1&&flag1==1&&flag3==1)
     cout<<"yes"<<endl;
    else
     cout<<"no"<<endl;
     }
   }
}
