//
// Created by hou on 2019/6/10.
//
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        int a[n],dp[n];
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        int length = -1;
        for(int j = 0; j < n; j++){
            dp[j] = 1;
            for(int k = 0; k < j; k++){
                if(a[k] < a[j] && dp[k] + 1 > dp[j]){
                    dp[j] = dp[k] + 1;
                }
            }
            length = max(length,dp[j]);
        }
        printf("%d\n",length);
    }
    return 0;
}
