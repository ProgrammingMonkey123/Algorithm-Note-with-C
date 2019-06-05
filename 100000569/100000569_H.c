//
// Created by hou on 2019/5/23.
//
#include <stdio.h>

int main(){
    int a[10],temp,i,j,k,l;
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for (j=1;j<=9;j++){
        for (k=0;k<10-j;k++){
            if(a[k]>a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    for (l=0;l<10;l++){
        printf("%d\n",a[l]);
    }
    return 0;
}
