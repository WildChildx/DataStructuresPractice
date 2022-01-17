#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n,num = 1,noteCount=0;
    cin>>n;

    switch (num)
    {
    case 1:
        noteCount = n/100;
        cout<<"100:"<<noteCount<<endl;
        n = n - ((noteCount)*100);  //remaining amount
        num++;                      //takes to next case
    case 2:
        noteCount = n/50;
        cout<<"50:"<<noteCount<<endl;
        n = n - ((noteCount)*50);
        num++;
    case 3:
        noteCount = n/20;
        cout<<"20:"<<noteCount<<endl;
        n = n - ((noteCount)*20);
        num++;
    case 4:
        noteCount = n/1;
        cout<<"10:"<<noteCount<<endl;
    
    default:
        break;
    }
  
    return 0;
}