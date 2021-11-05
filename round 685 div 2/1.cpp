#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--){
    long long int n;
        cin>>n;
        if(n==1||n==2||n==3){
            cout<<n-1<<endl;
            continue;
        }
        else if (n%2==0){
            cout<<"2"<<endl;
            continue;
        }
        else
        {
            cout<<"3"<<endl;
            continue;
        }

    }
}
