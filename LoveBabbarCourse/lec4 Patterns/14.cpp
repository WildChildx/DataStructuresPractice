#include<iostream>
using namespace std;
int main(){
    int n,row = 1;
    char start = 'A';
    cin>>n;
    while(row<=n){   
        int col = 1;
        while(col<=row){
            cout<<start<<" ";   //type casting int -> char
            start +=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}