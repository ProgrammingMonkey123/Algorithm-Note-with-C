//
// Created by hou on 2019/5/23.
//
#include <stdio.h>

int main(){
    int a[20];
    a[0] = 1;
    a[1] = 1;
    int i,j;
    for(i=2;i<20;i++){
        a[i] = a[i-2] + a[i-1];
    }
    for (j=0;j<20;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}
