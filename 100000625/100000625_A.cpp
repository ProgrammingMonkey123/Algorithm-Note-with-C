//
// Created by hou on 2019/6/10.
//
#include <cstdio>

using namespace std;

int dp[1000000] = {0,1,1};  //部分初始化，未赋值的好像是默认为0

int F(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else if(dp[n] > 0) return dp[n];
    else if(dp[n] <= 0){
        dp[n] = F(n - 1) + F(n - 2);
        return dp[n];
    }
}

int main(){
    int n;  //n这里是表示第几位，dp就是从0开始依次存的，不用考虑内存问题
    while (scanf("%d",&n) != EOF){
        printf("%d\n",F(n));
    }
    return 0;
}
