#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two nos:"<<endl;
    cin>>a>>b;
    cout<<"Enter operator:";
    char op;
    cin>>op;
  switch (op)
    {
    case '+':
        cout<<"Addition:"<<a+b<<endl;
        break;
    case '-':
        cout<<"Substraction:"<<a-b<<endl;
        break;
    case '*':
        cout<<"Multiplication:"<<a*b<<endl;
        break;
    case '/':
        cout<<"Division:"<<a/b<<endl;
        break;
    
    default:
        cout<<"Invalid input / operator";
        break;
    }
  
    return 0;
}