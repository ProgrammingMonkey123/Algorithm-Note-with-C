//
// Created by hou on 2019/5/22.
//

#include <stdio.h>
#include <math.h>
int main(){
    double sum = 1,i = 1;
    int count = 1;
    while(1){
        i = i + 2;
        if(fabs(1/i)<1e-6){
            break;
        }
        sum = sum + pow(-1,count) * (1 / i);
        count ++;
    }
    printf("PI=%10.8f\n",4 * sum);
    return 0;
}