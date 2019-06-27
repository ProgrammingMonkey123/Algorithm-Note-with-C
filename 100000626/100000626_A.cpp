//
// Created by hou on 2019/6/10.
//
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    while (true){
        int n;
        scanf("%d",&n);
        if(n == 0) break;
        else{
            int a[n],b[n];
            for(int i = 0; i < n; i++){
                scanf("%d",&a[i]);
                b[i] = a[i];
            }
            sort(a,a+n);
            if(a[n-1] < 0){
                printf("%d %d %d\n",0,b[0],b[n-1]);
            } else{
                int dp[n];
                dp[0] = b[0];
                for(int j = 1; j < n; j++){
                    dp[j] = max(b[j],dp[j - 1] + b[j]);
                }
                int l = 0,end = 0,max_p = 0;
                for(int k = 0; k < n; k++){
                    if(dp[k] > dp[max_p]){
                        max_p = k;
                    }
                }
                end = max_p;
                while (dp[end - l] == dp[end -1 - l] + b[end - l]){
                    l = l + 1;
                }
                printf("%d %d %d\n",dp[end],b[end - l],b[end]);
            }
        }
    }
    return 0;
}
