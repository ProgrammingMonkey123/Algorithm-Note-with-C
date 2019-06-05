//
// Created by hou on 2019/5/27.
//
#include <stdio.h>
#include <math.h>
int isPrime(int n){
    if (n <= 1) return 0;
    int sqr = (int)sqrt(1.0 * n);
    for(int i=2;i<=sqr;i++){
        if ((n % i) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        int prime[1000], pNum = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime(i) && i % 10 == 1) {
                prime[pNum++] = i;
            }
        }
        if (pNum == 0) {
            printf("%d\n", -1);
        } else {
            for (int j = 0; j < pNum - 1; j++) {
                printf("%d ", prime[j]);
            }
            printf("%d\n", prime[pNum - 1]);
        }
    }
    return 0;
}