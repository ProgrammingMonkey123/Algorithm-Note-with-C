//
// Created by hou on 2019/6/9.
//
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        if(n == 0){
            printf("list is empty\n");
        } else {
            int a[n];
            for (int i = 0; i < n; i++) {
                scanf("%d", &a[i]);
                printf("%d ",a[i]);
            }
            printf("\n");
            reverse(a,a + n);
            for(int j = 0; j < n; j++){
                printf("%d ",a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
