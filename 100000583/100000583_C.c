//
// Created by hou on 2019/6/10.
//
#include <stdio.h>

int P[100000];

int F(int sum,int n){
    if(sum == 0) return 1;  //表示该取法可行
    if(n == 0) return 0;  //遍历完输入之和不能等于40
    else return F(sum,n - 1) + F(sum - P[n-1],n - 1);
}

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        for(int i = 0; i < n; i++){
            scanf("%d",&P[i]);
        }
        printf("%d\n",F(40,n));
    }
    return 0;
}
