//
// Created by hou on 2019/6/3.
//
#include <stdio.h>

float fact(int n){
    float out = 1.0;
    for (int i = 1;i <= n;i++){
        out = out * i;
    }
    return out;
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",(int)(fact(m)/(fact(n)*fact(m - n))));
    return 0;
}
