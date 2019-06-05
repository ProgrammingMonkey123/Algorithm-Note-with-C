//
// Created by hou on 2019/5/27.
//
#include <stdio.h>
int main(){
    int n,m,i;
    scanf("%d",&n);
    while (n--){
        scanf("%d",&m);
        int sum = 0;
        if(m > 0) {
            for (i = m; i <= 2 * m; i++) {
                sum = sum + i;
            }
        } else if (m < 0){
            for (i = 2 * m;i <= m;i++){
                sum = sum + i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
