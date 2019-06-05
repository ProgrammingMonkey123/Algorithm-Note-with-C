//
// Created by hou on 2019/5/27.
//
#include <stdio.h>
#include <math.h>
int main(){
    int i,m,n,x,a[11],sum = 0;
    scanf("%d",&m);
    while (m--){
        scanf("%d",&n);
        for(i=0;i<=n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        for (i=0;i<=n;i++){
            sum = sum + a[i] * (int)pow(x,i);
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
