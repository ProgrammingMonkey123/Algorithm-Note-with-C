//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    double a;
    scanf("%lf",&a);
    if(a <= 100000){
        printf("%.2f",0.1 * a);
    }
    else if(a <= 200000){
        printf("%.2f",10000 + 0.075 * (a - 100000));
    }
    else if(a <= 400000){
        printf("%.2f",17500 + 0.05 * (a - 200000));
    }
    else if(a <= 600000){
        printf("%.2f",27500 + 0.03 * (a - 400000));
    }
    else if(a <= 1000000){
        printf("%.2f", 33500 + 0.015 * (a - 600000));
    }
    else{
        printf("%.2f",39500 + 0.01 * (a - 1000000));
    }
    return 0;
}
