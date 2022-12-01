#include <iostream>
#include <math.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int ans = 0,i = 0;
     //convert in binary
     while(n != 0){
         int bit = n&1;
         ans = (bit * pow(10,i))+ans;
         n >>=1;
         i++;
     }
     cout<<ans;
    return 0;
}