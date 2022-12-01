#include<stdio.h>
#include<conio.h>
static int x,y;

void func(int *a,int *b){
    *a <<= 1;
    *b = *a;
}

void main(void){
    x = 1, y =2;
    func(&x,&y);
    printf("%d %d" ,x,y);
}