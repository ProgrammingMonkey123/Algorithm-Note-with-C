//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int str[n][n];
    int i,j,k;
    str[0][0] = 1;
    if(n == 1){
        printf("%d",1);
    }
    if(n>1 && n<=10) {
        printf("%d\n",1);
        for (i = 1; i < n; i++) {
            str[i][0] = 1;
            str[i][i] = 1;
            for (j = 1; j < i; j++) {
                str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
            }
            for(k = 0;k <= i;k++){
                printf("%d ",str[i][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
