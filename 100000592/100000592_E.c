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

int isYing(int a){
    int sum = 0;
    for(int i = 1;i < a;i++){
        if (a % i == 0){
            sum = sum + i;
        }
    }
    if (sum > a){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int a[60],a_count = 0,b[60],b_count = 0;
    for(int i = 2; i <= 60; i++){
        if(isWan(i)){
            a[a_count++] = i;
        } else if(isYing(i)){
            b[b_count++] = i;
        }
    }
    printf("E: ");
    for (int j = 0;j<a_count;j++){
        printf("%d ",a[j]);
    }
    printf("G:");
    for (int k = 0;k < b_count;k++){
        printf("%d ",b[k]);
    }
    return 0;
}
