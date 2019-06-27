//
// Created by hou on 2019/6/20.
//
#include <stdio.h>

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        int a[n],m;
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        int b[m];
        for(int i = 0; i < m; i++){
            scanf("%d",&b[i]);
            int flag = 0;
            for(int j = 0; j < n; j++){
                if(a[j] == b[i]){
                    flag = 1;
                    printf("YES\n");
                    break;
                }
            }
            if(flag == 0) printf("NO\n");
        }
    }
    return 0;
}
