//
// Created by hou on 2019/6/20.
//
#include<stdio.h>

int main(){
    int N;
    while (1){
        scanf("%d",&N);
        if(N == 0) break;
        int a[1010],x,count = 0;
        for(int i = 0; i < N; i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        for(int i = 0; i < N; i++){
            if(x == a[i]) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
