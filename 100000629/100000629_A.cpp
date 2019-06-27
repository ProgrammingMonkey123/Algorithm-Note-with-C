//
// Created by hou on 2019/6/10.
//
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char a[10000];
    while (gets(a) != NULL){
        char b[10000];
        int k = 0,p[10000] = {0};
        for (int i = 0; i < (int)strlen(a);i++){
            if(a[i] >= 'a' && a[i] <= 'z')  {
                p[k] = i;
                b[k++] = a[i] - 32;
            }
            else if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9')) {
                p[k] = i;
                b[k++] = a[i];
            }
        }
        int dp[k+1][k+1],length = 1,left_p = 0;
        memset(dp,0, sizeof(dp));
        for(int i = 0; i < k; i++){
            dp[i][i] = 1;
            if(i < k - 1 && b[i] == b[i+1]){
                dp[i][i+1] = 1;
                length = 2;
                left_p = i;
            }
        }
        for(int L = 3; L <= k; L++){
            for(int i = k - L; i >= 0; i -- ){
                int j = i + L - 1;
                if(b[i] != b[j]) dp[i][j] = 0;
                else {
                    if(dp[i+1][j-1]){
                        dp[i][j] = 1;
                        length = L;
                        left_p = i;
                    }
                }
            }
        }
        //printf("%d",p[left_p + length - 1]);
        for(int t = p[left_p]; t <= p[left_p + length - 1]; t++ ){  //这个位置已开始没搞明白，最右端点索引应为left_p+length-1，输出应该包括它
            printf("%c",a[t]);
        }
        printf("\n");
    }
    return 0;
}
