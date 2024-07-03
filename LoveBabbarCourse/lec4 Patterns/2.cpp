#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1,k=0;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<k+1;
            k+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}