//
// Created by hou on 2019/6/16.
//
#include <stdio.h>

int main(){
    long long m,a,b;
    while (scanf("%lld",&m) != EOF){
        if(m == 0) break;
        else{
            scanf("%lld %lld",&a,&b);
            long long c = a + b;
            long long z[1000],num = 0;
            do{
                z[num++] = c % m;
                c = c / m;
            }while (c != 0);
            for(long long i = num - 1; i >= 0; i--){
                printf("%lld",z[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
