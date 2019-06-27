//
// Created by hou on 2019/6/9.
//
#include <stdio.h>

int F(int n){
    if(n == 1 || n == 2) return 1;
    else return F(n-1) + F(n-2);
}

int main(){
    int n;
    scanf("%d",&n);
    while (n--){
        int m;
        scanf("%d",&m);
        int length = 2 * m - 1;
        int a[length];
        a[0] = 0;
        for(int i = 1; i < length; i++){
            a[i] = F(i);
        }
        for(int j = 1; j <= m; j++){
            int s_num = (length - 2 * j + 1) / 2;
            int n_num = 2 * j - 1;
            for(int l = 0; l < s_num; l++){
                printf("  ");
            }
            for(int k = 0; k < n_num; k++){
                printf("%d ",a[k]);
            }
            for(int b = 0; b < s_num; b++){
                printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}
