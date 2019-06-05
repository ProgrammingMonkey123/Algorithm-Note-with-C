//
// Created by hou on 2019/5/27.
//
#include <stdio.h>

int main(){
    int a,b,sum = 0,n;
    scanf("%d",&a);
    while (a--){
        scanf("%d",&n);
        while (n --){
            scanf("%d",&b);
            sum = sum + b;
        }
        printf("%d\n\n",sum);
        sum = 0;
    }
    return 0;
}
