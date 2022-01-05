// formula 'A'+ row -1
#include<iostream>
using namespace std;
int main(){
    int n,row = 1;
    cin>>n;
    while(row<=n){   
        int col = 1;
        while(col<=n){
            cout<<char('A'+row +col-2)<<" ";   //type casting int -> char
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}