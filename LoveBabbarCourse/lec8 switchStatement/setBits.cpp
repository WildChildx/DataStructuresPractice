//set bits (assuming 32-bit integer)
#include <bits/stdc++.h>
using namespace std;

int setBits(int n){
  int bit = 0,count=0;
  for(int i=0;i<=32;i++){
    bit = (n&1);
    if(bit)
      count++;
    n = n>>1;
  }

  return count;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<setBits(a)+setBits(b);
  return 0;
}