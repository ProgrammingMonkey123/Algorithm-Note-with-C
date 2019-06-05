//
// Created by hou on 2019/6/3.
//
#include <stdio.h>
#include <math.h>
int isPrime(int n){
    if(n <= 1){
        return 0;
    }
    int sqr = (int)sqrt(1.0 * n);
    for(int i = 2;i <= sqr; i++){
        if ((n % i) == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    while (1){
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        int count = 0;
        for (int i = 2; i <= n / 2;i++){
            if (isPrime(i) && isPrime(n - i)){
                count ++;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}
