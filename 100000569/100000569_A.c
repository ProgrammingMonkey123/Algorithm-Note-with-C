//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    int a[10];
    int b,i,j,k,l;
    for (i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
    getchar();
    scanf("%d",&b);
    if(b >= a[8]){
        a[9] = b;
    } else if(b <= a[0]){
        for (k=9;k>0;k--){
            a[k] = a[k-1];
        }
        a[0] = b;
    } else {
        for (j = 0; j < 9; j++) {
            if (a[j] < b && b < a[j + 1]) {
                for (k = 9; k > j + 1; k--) {
                    a[k] = a[k - 1];
                }
                a[j + 1] = b;
                break;
            }
        }
    }
    for(l=0;l<10;l++){
        printf("%d\n",a[l]);
    }
    return 0;
}
