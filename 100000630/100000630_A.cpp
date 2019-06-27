//
// Created by hou on 2019/6/11.
//
#include <cstdio>
#include <cstring>

using namespace std;

const int INF = 100000;
const int MAXN = 1100;
int G[MAXN][MAXN],dp[MAXN],n,choice[MAXN];

int DP(int i){
    if (dp[i] > 0) return dp[i];
    for(int j = 0; j < n; j++){
        if(G[i][j] != -INF){
            int temp = DP(j) + G[i][j];
            if(temp > dp[i]){
                dp[i] = temp;
                choice[i] = j;
            }
        }
    }
    return dp[i];
}

int main(){
    int N;
    scanf("%d",&N);
    while (N--){
        scanf("%d",&n);
        int a[n][2];
        for(int j = 0; j < n; j++){
            scanf("%d %d",&a[j][0],&a[j][1]);
        }
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                G[i][j] = -INF;
                if(i != j){
                    if((a[i][0] < a[j][0] && a[i][1] < a[j][1]) || (a[i][0] < a[j][1] && a[i][1] < a[j][0])){
                        G[i][j] = 1;
                    }
                }
            }
        }
        memset(dp,0, sizeof(dp));
        memset(choice,0, sizeof(choice));
        int max = 0;
        for(int i = 0; i < n; i++){
            if(DP(i) > max) max = DP(i);
        }
        printf("%d\n",max+1);  //dp[i]记录的是从i出发能获得的最长路径长度，如果要计点的个数要加1
    }
    return 0;
}