//
// Created by hou on 2019/6/5.
//
#include <stdio.h>
#include <math.h>
int isPrime(int n){
    double sqr = sqrt(1.0 * n);
    for(int i = 2; i <= sqr; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    struct factor{
        int x;
        int count;
    }fac[10];
    int n;
    while (scanf("%d",&n) != EOF){
        int sqr = (int)sqrt(1.0 * n), k = 0;
        for (int i = 2; i <= sqr; i++){
            if(isPrime(i) && n % i == 0){
                fac[k].x = i;
                fac[k].count = 0;
                while (n % i == 0){
                    fac[k].count++;
                    n = n / i;
                }
                k ++;
            }
        }
        if(n != 1){
            fac[k].x = n;
            fac[k++].count = 1;
        }
        int sum = 0;
        for (int j = 0; j < k;j++){
            sum = sum + fac[j].count;
        }
        printf("%d\n",sum);
    }
    return 0;
}
