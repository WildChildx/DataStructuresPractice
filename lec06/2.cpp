#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     if(n<0){
         n *=-1;
     }
     int ans = 0,i = 0;
     //convert in binary
     while(n != 0){
         int bit = n&1;
         ans = (bit * pow(10,i))+ans;
         n = n >> 1; //right shift
         i++;
     }
     //in once complement
    // string string = to_string(ans);
    // int j = 0;
    // while(j!=string.length()){
    //     if(string[j]=='1'){
    //         string[j] = '0';
    //     }else{
    //         string[j] = '1';
    //     }
    // j++;
    // }
    // ans = stoi(string);
   cout<<(~ans+1)*-1;  //two's complement
    return 0;
}