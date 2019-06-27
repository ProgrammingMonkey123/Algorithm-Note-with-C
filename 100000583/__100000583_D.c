//
// Created by hou on 2019/6/10.
//
//八皇后问题
//刚开始直接将一个排列存在P的对应一行里，结果出错(排列中出现0)，
//后来先开一个一行数组T，然后通过T给每一行赋值，结果正确
//推测应为赋值时不对应导致，递归部分的运行机制还需要再看
#include <stdio.h>
#include <math.h>
#include <string.h>
int n = 8,P[100][10],hashTable[10] = {0},T[10];
int count = 1;

void generateP(int index){
    if(index == (n + 1)){
        for(int k = 0; k < n; k++){
            P[count][k] = T[k + 1];
        }
        count++;
        return;
    }
    for(int x = 1; x <= n; x++){
        if(hashTable[x] == 0){
            int flag = 1;
            for(int pre = 1; pre < index; pre++){
                if(abs(index - pre) == abs(x - T[pre])){
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                T[index] = x;
                hashTable[x] = 1;
                generateP(index + 1);
                hashTable[x] = 0;
            }
        }
    }
}

int main(){
    generateP(1);
    int m;
    while (scanf("%d",&m) != EOF) {
        while (m--) {
            int b;
            scanf("%d", &b);
            if (b >= 1 && b <= 92) {
                for (int i = 0; i < 8; i++) {
                    printf("%d", P[b][i]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
