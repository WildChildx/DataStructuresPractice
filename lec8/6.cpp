//counting numbers
#include <bits/stdc++.h>
using namespace std;

string checkPrime(int n){
 for(int i=2;i<n;i++)
    if(n%i==0)
      return "not prime";
    return "prime";
}

int main(){
  int n;
  cin>>n;
  cout<<checkPrime(n);
  return 0;
}