//
// Created by hou on 2019/6/11.
//
#include <stdio.h>

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        while (n--){
            int k,flag = 1;
            scanf("%d",&k);
            int a[k];
            for(int i = 0; i < k; i++){
                scanf("%d",&a[i]);
            }
            if(a[0] != a[1]) {
                flag = 0;
                printf("%d ",0);
            }
            for(int j = 1; j < k - 1; j++){
                if((a[j] > a[j - 1] && a[j] > a[j + 1]) || (a[j] < a[j - 1] && a[j] < a[j + 1])) {
                    flag = 0;
                    printf("%d ",j);
                }
            }
            if(a[k-1] != a[k - 2]) {
                flag = 0;
                printf("%d",k-1);
            }
            if(flag == 0){
                printf("\n");
            }

        }
    }
    return 0;
}
