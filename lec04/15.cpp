#include<iostream>
using namespace std;
int main(){
    int n,row = 1;
    char start = 'A';
    cin>>n;
    while(row<=n){   
        int col = 1;
        while(col<=row){
            cout<<char(start)<<" ";   //type casting int -> char
            start +=1;
            col+=1;
        }
        start = char('A'+row);
        cout<<endl;
        row+=1;
    }
    return 0;
}