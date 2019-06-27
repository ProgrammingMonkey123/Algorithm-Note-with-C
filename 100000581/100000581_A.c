//
// Created by hou on 2019/6/14.
//
//尝试使用选择排序法排序

#include <stdio.h>

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        for(int i = 0; i < n; i++){
            int k = i;
            for(int j = i; j < n; j++){
                if(a[j] < a[k]) k = j;
            }
            int temp;
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
        for(int i = 0; i < n; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}