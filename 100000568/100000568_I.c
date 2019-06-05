//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    double a[25],b[25];
    a[0]=1,a[1]=1;
    b[0]=1,b[1]=1;
    int i,j;
    double sum = 0;
    for (i=2;i<24;i++){
        a[i] = a[i-1] + a[i-2];
        b[i] = b[i-1] + b[i-2];
    }
    for(j=1;j<=20;j++){
        sum = sum + (a[j+1]/b[j]);
    }
    printf("%.6f\n",sum);
    return 0;
}
