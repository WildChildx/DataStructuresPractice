#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int m = n;
    int mask = 0;
        //edge case
        if(!m)
            return 1;
        while(m!=0){
            //do left shift and add 1 to the LSB
            mask = (mask<<1) |1;
            //right shift the bits until the binary becomes 0
            m = m>>1;
        }
        cout<<((~n)&mask);
    return 0;
}