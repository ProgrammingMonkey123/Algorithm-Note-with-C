//
// Created by hou on 2019/5/23.
//

#include <stdio.h>

int main(){
    int a[10];
    int i,j;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++){
        printf("%d\n",a[9-j]);
    }
    return 0;

}