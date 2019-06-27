//
// Created by hou on 2019/6/14.
//
#include <stdio.h>
#include <string.h>

int n;
//使用快速排序对加和的序列排序
void quickSort(int b[], int l, int r){
    if(l < r){  //不满足时说明子区间只有一个元素，达到递归结束条件
        int x = b[l],i = l, j = r;
        while (i < j) {
            while (b[j] < x && j > i) j--;
            if (i < j) b[i++] = b[j];    //i原位置已经被覆盖，指针加1
            while (b[i] > x && i < j) i++;
            if (i < j) b[j--] = b[i];   //j原位置已经被覆盖，指针减1
        }
        b[i] = x;  //当i = j 时令b[i] = b[j] = 基准数
        quickSort(b, l, i - 1);
        quickSort(b, i + 1, r);
    }
}

int main(){
    while (scanf("%d",&n) != EOF){
        int a[n][n],b[2 * n + 2]; // a数组存原始矩阵，b数组存行列对角线加和
        memset(b,0, sizeof(b));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                b[i] = b[i] + a[i][j];
                b[i + n] = b[i + n] + a[j][i];
                if(i == j) b[2 * n] = b[2 * n] + a[i][j];
                if(i + j == n - 1) b[2 * n + 1] = b[2 * n + 1] + a[i][j];
            }
        }
        quickSort(b,0,2 * n + 1);
        for(int i = 0; i < 2 * n + 2; i++){
            printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;
}
