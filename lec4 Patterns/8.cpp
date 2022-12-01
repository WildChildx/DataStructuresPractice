#include<iostream>
using namespace std;
int main(){
    int i = 1,n;
    cin>>n;
    while(i<=n){
        int j = i;
        while(j>=1){
            cout<<j<<" ";
            j-=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}

//method 2

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1,n;
//     cin>>n;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<i-j+1<<" ";
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
//     return 0;
// }