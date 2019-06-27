//
// Created by hou on 2019/6/16.
//

#include <stdio.h>

int main(){
    long long a;
    while (scanf("%lld",&a) != EOF){
        long long z[200],num = 0;
        do{
            z[num++] = a % 8;
            a = a / 8;
        }while (a != 0);
        for(long long i = num - 1; i >= 0; i--){
            printf("%lld",z[i]);
        }
        printf("\n");
    }
    return 0;
}
