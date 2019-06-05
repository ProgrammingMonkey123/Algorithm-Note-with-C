//
// Created by hou on 2019/5/27.
//
#include <stdio.h>
int main(){
    int f;
    while (scanf("%d",&f) != EOF){
        int a[2][3],b[3][2],c[2][2],i,j;
        a[0][0] = f;
        for (i=0;i<2;i++){
            for (j=0;j<3;j++){
                if (i==0 && j==0){
                    continue;
                } else{
                scanf("%d",&a[i][j]);
                }
            }
        }
        for (i=0;i<3;i++){
            for (j=0;j<2;j++){
                scanf("%d",&b[i][j]);
            }
        }
        c[0][0] = a[0][0]*b[0][0]+a[0][1]*b[1][0]+a[0][2]*b[2][0];
        printf("%d ",c[0][0]);
        c[0][1] = a[0][0]*b[0][1]+a[0][1]*b[1][1]+a[0][2]*b[2][1];
        printf("%d\n",c[0][1]);
        c[1][0] = a[1][0]*b[0][0]+a[1][1]*b[1][0]+a[1][2]*b[2][0];
        printf("%d ",c[1][0]);
        c[1][1] = a[1][0]*b[0][1]+a[1][1]*b[1][1]+a[1][2]*b[2][1];
        printf("%d\n",c[1][1]);
    }
    return 0;
}
