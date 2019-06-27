//
// Created by hou on 2019/6/14.
//
//尝试使用计数排序进行排序
#include <stdio.h>
#include <string.h>
int N;
void countSort(int a[]){
    int min = a[0],max = a[0];
    for(int i = 0; i < N; i++){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    int count[max - min + 1];
    memset(count,0, sizeof(count));
    for(int i = 0; i < N; i++){
        count[a[i] - min]++;
    }
    int j = 0;
    for(int i = 0; i < max - min + 1;i++){
        int k = i;
        while (count[i]--){
            a[j] = min + k;
            j++;
        }
    }
}
int main(){
    while (scanf("%d",&N) != EOF){
        if(N == 0) break;
        else{
            int a[N];
            for(int i = 0; i < N; i++){
                scanf("%d",&a[i]);
            }
            countSort(a);
            if(N % 2 == 0){
                int z = (a[N / 2] + a[N / 2 - 1]) / 2;  //偶数个数，下标0到N-1
                printf("%d\n",z);
            } else{
                printf("%d\n",a[N / 2]);
            }
        }
    }
    return 0;
}
