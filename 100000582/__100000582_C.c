//
// Created by hou on 2019/6/5.
//
//不会出现有多个是不重复的第一个出现获胜的情况，这样就复杂了
#include <stdio.h>
int main(){
    int a[100010],n,j;
    while (scanf("%d",&n) != EOF){
        int hashtable[10010] = {0};
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            hashtable[a[i]] ++;
        }
        //getchar();
        for (j = 0; j < n; j++){
            if (hashtable[a[j]] == 1) break;
        }
        if (j < n) printf("%d\n",a[j]);
        else printf("None\n");
    }
    return 0;
}
