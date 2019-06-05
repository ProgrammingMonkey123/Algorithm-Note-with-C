//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    int i,sum = 0,N;
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}
