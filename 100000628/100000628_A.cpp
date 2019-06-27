//
// Created by hou on 2019/6/10.
//
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    char a[100],b[100];
    while (scanf("%s %s",a,b) != EOF){
        int lenA = (int)strlen(a),lenB = (int)strlen(b);
        int dp[lenA+1][lenB+1];
        for(int i = 0; i <= lenA; i++){
            for(int j = 0; j <= lenB; j++){
                dp[i][j] = 0;
            }
        }
//        for(int i = 0; i < lenA; i++){
//            dp[i][0] = 0;
//        }
//        for(int j = 0; j < lenB; j++){
//            dp[0][j] = 0;
//        }
        for(int k = 0; k < lenA; k++){
            for(int l = 0; l < lenB; l++){
                if(a[k] == b[l]){
                    dp[k+1][l+1] = dp[k][l] + 1;
                } else{
                    dp[k+1][l+1] = max(dp[k+1][l],dp[k][l+1]);
                }
            }
        }
        printf("%d\n",dp[lenA][lenB]);
    }
    return 0;
}
