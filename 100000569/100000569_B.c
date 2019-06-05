//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    int str[20];
    int i,j;
    for (i=10;i<20;i++){
        scanf("%d",&str[i]);
    }
    for (j=0;j<10;j++){
        str[j] = str[19-j];
        printf("%d\n",str[j]);
    }
    return 0;
}
