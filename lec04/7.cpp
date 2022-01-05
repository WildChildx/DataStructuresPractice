//from pattern 06 without using value variable 
//formula row + col -1
//row from 1 to n , col from 1 to row
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 0;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row + col - 1<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}