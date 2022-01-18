
//Dabbang problem solution:

#include<iostream>
using namespace std;
int main(){
    int rowCount;
    cin>>rowCount;
    int row = 1, n = rowCount,starCount = 0;
    while(row<=rowCount){   
        int col = 1;
        while(col<=n){
            cout<<col;
            col++;
        }
        col = 1;
        while(col<=starCount){
            cout<<"*";
            col++;
        }
        col = n;
        while(col){
            cout<<col;
            col--;
        }
        cout<<endl;
        n--;
        starCount+=2;
        row++;
    }
    return 0;
}