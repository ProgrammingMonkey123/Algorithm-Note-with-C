//
// Created by hou on 2019/5/27.
//
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i,j,b[a],c[a];
    for (i = 0; i < a; i++){
        scanf("%d %d",&b[i],&c[i]);
    }
    for (j = 0; j < a; j++){
        printf("%d\n",(b[j] + c[j]));
    }
    return 0;
}
