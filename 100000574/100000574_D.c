//
// Created by hou on 2019/5/27.
//
#include <stdio.h>

int main(){
    int n,a,sum = 0,t = 1;
    while (t){
        scanf("%d",&n);
        if(n){
            for(int i=1;i<=n;i++){
                scanf("%d",&a);
                sum = sum + a;
            }
            printf("%d\n",sum);
            sum = 0;
        } else{
            t = 0;
            break;
        }
    }
    return 0;
}
