#include <iostream>

using namespace std;

int main()
{
    int tc,n = 0;
    cin >> tc;
    int c[tc-1];
    for(int i=0;i<tc;i++){
        cin >> c[i];
    }
    for(int t=0;t<tc;t++){
        n=c[t];
        int a[n-1];

        for(int r=0;r<n;r++){
           a[r]=r+1;
            }
    if(n==2){
         for(int m=0;m<n;m++){
                cout<<m+1<<endl;
        }
            }
    else{
            cout<<n<<endl;
        for(int m=0;m<n;m++){

                if(a[m]!=m)
            {
                a[m] += m+1;
            }
            cout<<m+1<<" ";
                            }
    }

    }

}
