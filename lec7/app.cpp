#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int ans = 0,i = 0;
     //convert in binary
     while(n != 0){
         int digit = n%10;  //digit and bit are different
         if(digit==1){
             ans += pow(2,i);
         }else{
             ans+=0;
         }
         n = n / 1; 
         i++;
     }
     cout<<ans;
    return 0;
}