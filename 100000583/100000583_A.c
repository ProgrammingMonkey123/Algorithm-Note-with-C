//
// Created by hou on 2019/6/9.
//
#include <stdio.h>

int F(int n){
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else return F(n-1)+F(n-2);
}

int main(){
    int N;
    while (scanf("%d",&N) != EOF){
        printf("%d\n",F(N));
    }
    return 0;
}