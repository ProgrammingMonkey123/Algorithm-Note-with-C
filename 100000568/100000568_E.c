//
// Created by hou on 2019/5/22.
//

#include <stdio.h>

int main(){
    int i = 0,sum = 0;
    while (sum <= 1000){
        i = i + 1;
        sum = sum + i;
    }
    printf("%d",i);
    return 0;
}
