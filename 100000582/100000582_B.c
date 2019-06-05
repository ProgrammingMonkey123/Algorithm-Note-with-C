//
// Created by hou on 2019/6/5.
//
#include <stdio.h>
#include <string.h>

const int maxn = 2010;

int main(){
    int hashTable[maxn][maxn];
    int m,n,a[110],t;
    scanf("%d",&m);
    getchar();
    while (m--){
        scanf("%d",&n);
        getchar();
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            hashTable[0][a[i]] = 1;
        }
        for(int i = 0; i < n; i++){
            scanf("%d",&t);
            hashTable[t][a[i]]++;
            if (hashTable[t][0] == 0) hashTable[t][0] = 1;
        }
        for (int i=1; i < maxn; i++){
            if(hashTable[i][0] == 1){
                printf("%d={",i);
                int flag = 0;
                for (int j = 1;j < maxn; j++){
                    if(hashTable[0][j] == 1){
                        if(flag) printf(",");
                        else flag = 1;
                        printf("%d=%d",j,hashTable[i][j]);
                    }
                }
                printf("}\n");
            }
        }
        memset(hashTable,0, sizeof(hashTable)); //用来初始化数组，将所有元素置0
    }
    return 0;
}
