//
// Created by hou on 2019/6/5.
//
#include <stdio.h>

int isWan(int a){
    int sum = 0;
    for(int i = 1;i < a;i++){
        if (a % i == 0){
            sum = sum + i;
        }
    }
    if (sum == a){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        int a[1000],k = 0;   //这是知道数组中有多少个元素的好方法
        for (int i = 2;i <= n;i++){
            if (isWan(i)){
                a[k++] = i;
            }
        }
        for (int j = 0; j < k; j++){
            printf("%d",a[j]);
            if(j < k-1){
                printf(" ");
            } else{
                printf("\n");
            }
        }
    }
    return 0;
}
