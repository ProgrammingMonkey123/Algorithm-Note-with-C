//
// Created by hou on 2019/6/20.
//
#include <stdio.h>

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        int a[n],x,out = -1;
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        for(int i = 0; i < n; i++){
            if(a[i] == x){
                out = i;
                break;
            }
        }
        printf("%d\n",out);
    }
    return 0;
}
