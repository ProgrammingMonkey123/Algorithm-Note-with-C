//
// Created by hou on 2019/6/5.
//
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    while (1){
        scanf("%d",&n);
        if(n == 0){
            break;
        } else{
            getchar();
            while (n--){
                int count = 0;
                long long m;
                scanf("%lld",&m);
                if(n == 1){
                    getchar();
                }
                int a = (int)sqrt(1.0 * m);   //直接循环m次会报超时错误
                for(int i = 1;i <= a;i++){
                    if(m % i == 0){
                        count = count + 2;
                    }
                }
                if (a * a == m){
                    count = count - 1;
                }
                printf("%d\n",count);
            }
        }
    }
    return 0;
}
