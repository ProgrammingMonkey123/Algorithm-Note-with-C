//
// Created by hou on 2019/6/10.
//
/*
 * 用 dp[i][v] 表示用前 i 种货币能表示 v 数量钱的方案数，则对第 i 种货币有选和不选的策略，故总的方案数为二者之和。
 * 因此可得状态转移方程为dp[i][v]=dp[i-1][v]+dp[i][v-w[i]]
 * 边界条件为dp[0][v]=0,dp[1][v]=1 同样也可以改写成一维形式，但是必须正向枚举，
 * 此时状态转移方程为 dp[v]=dp[v]+dp[v-w[i]]，
 * 边界条件为dp[v]=\left\{\begin{matrix} 0,\left ( 0<v<=V \right )\\ 1,\left ( v=0 \right ) \end{matrix}\right.
 */
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int V,N,count = 0;  //V表示货币种类，N表示总量
    while (scanf("%d %d",&V,&N) != EOF){
        int a[V];  //a储存货币种类
        for(int i = 0; i < V; i++){
            scanf("%d",&a[i]);
        }
        long long dp[N + 1];
        for(int i = 0; i <= N; i++){
            dp[i] = 0;
        }
        dp[0] = 1;  //dp表示前i中货币能表示v数量钱的方案数,表示0元有1种方案
        for(int i = 1; i <= V; i++){
            for(int v = a[i - 1]; v <= N; v++){
                if(v >= a[i - 1]){
                    dp[v] = dp[v] + dp[v - a[i - 1]];
                }
            }
        }
        printf("%lld\n",dp[N]);
    }
    return 0;
}
