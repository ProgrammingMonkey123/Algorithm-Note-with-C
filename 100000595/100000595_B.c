//
// Created by hou on 2019/6/3.
//
#include <stdio.h>

long long fact(long long n){
    long long out = 1;
    for (int i = 1;i <= n;i++){
        out = out * i;
    }
    return out;
}

int main(){
    long long m,n;
    while (scanf("%lld %lld",&m,&n) != EOF){
        printf("%d\n",(int)(fact(m)/(fact(n)*fact(m - n))));
    }
    return 0;
}
