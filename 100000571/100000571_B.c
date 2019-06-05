//
// Created by hou on 2019/5/23.
//
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int* p,*q,*r;
    p = &a;
    q = &b;
    r = &c;
    if (*p > *q && *p > *r && *q > *r){
        printf("%d %d %d",*p,*q,*r);
    }
    else if(*p > *q && *p > *r && *r > *q){
        printf("%d %d %d",*q,*r,*q);
    }
    else if(*q > *p && *q > *r && *r > *p){
        printf("%d %d %d",*q,*r,*p);
    }
    else if(*q > *p && *q > *r && *p > *r){
        printf("%d %d %d",*q,*p,*r);
    }
    else if(*r > *p && *r > *q && *p > *q){
        printf("%d %d %d",*r,*p,*q);
    }
    else if(*r > *p && *r > *q && *q > *p){
        printf("%d %d %d",*r,*q,*p);
    }
    return 0;
};
