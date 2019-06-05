//
// Created by hou on 2019/5/21.
//
#include <stdio.h>

int main(){
    double a,b,temp;
    scanf("%lf %lf",&a,&b);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    printf("%.2f %.2f\n",a,b);
    return 0;
}