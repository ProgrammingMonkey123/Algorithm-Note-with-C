//
// Created by hou on 2019/6/8.
//
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    double maxn = -1000000,minn = 1000000;
    int m;
    double n;
    while (scanf("%d",&m) != EOF) {
        getchar();
        while (m--) {
            scanf("%lf", &n);
            maxn = max(maxn, n);
            minn = min(minn, n);
        }
        printf("%d %d\n", (int)maxn, (int)minn);
        maxn = -1000000,minn = 1000000;
    }
    return 0;
}
