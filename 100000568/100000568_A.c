//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    int i = 0,sum = 0;
    while (i <= 100){
        sum = sum + i;
        i = i + 1;
    }
    printf("%d",sum);
    return 0;
}
