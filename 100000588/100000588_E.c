//
// Created by hou on 2019/5/27.
//
#include <stdio.h>
int main(){
    int f;
    while (scanf("%d",&f)!=EOF) {
        int a[10] = {1,2,3,4,5,6,7,8,9,10};//模板数组
        int i,j,k,b[20];
        int c[10] = {0,0,0,0,0,0,0,0,0,0};//计数数组
        b[0] = f;
        c[f-1] = 1;
        for (i = 1; i < 20; i++) {
            scanf("%d", &b[i]);
            for (j = 0; j < 10; j++) {
                if (b[i] == a[j]) {
                    c[j] = c[j] + 1;
                }
            }
        }
        int max = 0, max_p = 0;
        for (k = 0; k < 10; k++) {
            if (c[k] > max) {
                max = c[k];
                max_p = k;
            } else if(c[k] == max){
                if(max_p > k){
                    max_p = k;
                }
            }
        }
        printf("%d\n", a[max_p]);

    }
    return 0;
}
