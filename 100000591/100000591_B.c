//
// Created by hou on 2019/5/28.
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
    int a[100100],n = 0;
    for(int i=2;i<111000;i++){
        if(isPrime(i)){
            a[n++] = i;
        }
        if(n == 10000){
            break;
        }
    }
    int k;
    while (scanf("%d",&k) != EOF){
        printf("%d\n",a[k-1]);
    }
    return 0;
}
