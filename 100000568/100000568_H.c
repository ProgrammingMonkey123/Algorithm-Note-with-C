//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    int a = 1,b = 1,c,n,sum = 0,count = 2;
    scanf("%d",&n);
    if (n <= 50){
        if(n==1){
            printf("%d\n",1);
        } else {
            while (count < n){
            c = a + b;
            a = b;
            b = c;
            count++;
            }
            printf("%d",c);
        }
    }
    return 0;
}
