//
// Created by hou on 2019/5/27.
//
#include <stdio.h>

int main(){
    int i = 0,a[100];
    int b,c;
    while (1){
        scanf("%d %d",&b,&c);
        if(b == 0 && c == 0){
            break;
        }
        a[i] = b + c;
        i ++;
    }
    int j;
    for (j = 0; j < i;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}
