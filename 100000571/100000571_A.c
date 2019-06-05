//
// Created by hou on 2019/5/23.
//
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int* p , *q;
    p = &a;
    q = &b;
    if (*p > *q){
        printf("%d %d",*p,*q);
    } else{
        printf("%d %d",*q,*p);
    }
    return 0;
}
