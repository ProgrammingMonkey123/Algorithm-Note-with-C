//
// Created by hou on 2019/5/23.
//
#include <stdio.h>
int main(){
    int a[2][3],b[3][2];
    int i,j,k,l,m,n;
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (k=0;k<2;k++){
        for(l=0;l<3;l++){
            b[l][k] = a[k][l];
        }
    }
    for (m=0;m<3;m++){
        for(n=0;n<2;n++){
            printf("%d ",b[m][n]);
        }
        printf("\n");
    }
    return 0;
}
