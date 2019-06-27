//
// Created by hou on 2019/6/10.
//
//类01背包，价值换作体积，仍然是价值(体积)最大(不超过V)
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int V,n;
    while (scanf("%d %d",&V,&n) != EOF) {
        int a[n], dp[V];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int v = 0; v <= V; v++) {
            dp[v] = 0;
        }
        //int minn = 20000;
        for (int i = 1; i <= n; i++) {
            for (int v = V; v >= a[i - 1]; v--) {
                if (v >= a[i - 1]) {
                    dp[v] = max(dp[v], dp[v - a[i - 1]] + a[i - 1]);
                    //if (dp[v] < minn) minn = dp[v];
                }
            }
        }
        printf("%d\n", V - dp[V]);
    }
    return 0;
}
