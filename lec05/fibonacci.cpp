#include <iostream>
using namespace std;

int main(){
    int first = 0,second = 1;
    int n ;
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(int i = 0;i<n;i++){
        int temp = first+second;
        cout<<temp<<" ";
        first= second;
        second = temp;
    }
    
    return 0;
}