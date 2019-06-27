//
// Created by hou on 2019/6/14.
//
//尝试使用插入排序

#include <stdio.h>

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        if(n == 1){
            int a;
            scanf("%d",&a);
            printf("%d\n%d\n",a,-1);
        } else{
            int a[n];
            for(int i = 0; i < n; i++){
                scanf("%d",&a[i]);
            }
            for(int i = 1; i < n; i++){
                int temp = a[i], j = i;
                while (j >= 1 && temp < a[j - 1]){
                    a[j] = a[j - 1];
                    j--;
                }
                a[j] = temp;
            }
            printf("%d\n",a[n - 1]);
            for(int i = 0; i < n - 1; i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
