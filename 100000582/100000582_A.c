//
// Created by hou on 2019/6/5.
//
#include <stdio.h>

int main(){
    int N,M;
    while (scanf("%d %d",&N,&M) != EOF) {
        int a[N], b[200] = {0};
        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
        }
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (j != k && a[j] == a[k]) {
                    b[j]++;
                }
            }
            if (b[j] != 0) {
                printf("%d\n", b[j]);
            } else {
                printf("BeiJu\n");
            }
        }
    }
    return 0;
}
