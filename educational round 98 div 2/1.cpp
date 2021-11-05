#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--){
            int x=0,y=0;
        cin>>x>>y;
        if(x==y)
         cout<<x*2<<endl;
        else
        {
            if(x>y)
                cout<<(x*2)-1<<endl;
            else
                cout<<(y*2)-1<<endl;
        }

    }
}
