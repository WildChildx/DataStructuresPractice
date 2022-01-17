#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int a ,int b){
    int num = factorial(a);
    int deno = factorial(b)*factorial(a-b);
    return num/deno;
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<nCr(a,b);
  return 0;
}