//
// Created by hou on 2019/6/10.
//
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int T,M;
    while (scanf("%d %d",&T,&M) != EOF){
        int t[T],w[M];
        for(int i = 0; i < M; i++){
            scanf("%d %d",&t[i],&w[i]);
        }
        int dp[T + 1];
        for(int i = 0; i <= T; i++){
            dp[i] = 0;
        }
        for(int i = 1; i <= M; i++){
            for(int v = T; v >= t[i-1]; v--){
                dp[v] = max(dp[v],dp[v - t[i - 1]] + w[i - 1]);
            }
        }
        int maxx = 0;
        for(int i = 0; i <= T; i++){
            maxx = max(maxx,dp[i]);
        }
        printf("%d\n",maxx);
    }
    return 0;
}
