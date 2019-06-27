//
// Created by hou on 2019/6/14.
//
#include <stdio.h>

//从小到大排
void quickSort1(int b[],int l,int r) {
    if(l < r){  //不满足时说明子区间只有一个元素，达到递归结束条件
        int x = b[l],i = l, j = r;
        while (i < j) {
            while (b[j] > x && j > i) j--;
            if (i < j) b[i++] = b[j];    //i原位置已经被覆盖，指针加1
            while (b[i] < x && i < j) i++;
            if (i < j) b[j--] = b[i];   //j原位置已经被覆盖，指针减1
        }
        b[i] = x;  //当i = j 时令b[i] = b[j] = 基准数
        quickSort1(b, l, i - 1);
        quickSort1(b, i + 1, r);
    }
}
void quickSort2(int b[],int l,int r) {
if(l < r){  //不满足时说明子区间只有一个元素，达到递归结束条件
    int x = b[l],i = l, j = r;
    while (i < j) {
        while (b[j] < x && j > i) j--;
        if (i < j) b[i++] = b[j];    //i原位置已经被覆盖，指针加1
        while (b[i] > x && i < j) i++;
        if (i < j) b[j--] = b[i];   //j原位置已经被覆盖，指针减1
    }
    b[i] = x;  //当i = j 时令b[i] = b[j] = 基准数
    quickSort2(b, l, i - 1);
    quickSort2(b, i + 1, r);
}
}

int main(){
    int a[10];
    while (scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]) != EOF){
        int b[10],c[10],i = 0,j = 0;
        for(int k = 0; k < 10; k++){
            if(a[k] % 2 == 0) b[i++] = a[k];   //b存偶数,c存奇数
            else c[j++] = a[k];
        }
        quickSort1(b,0,i - 1);
        quickSort2(c,0,j - 1);
        for(int k = 0; k < j; k++){
            printf("%d ",c[k]);
        }
        for(int k = 0; k < i; k++){
            printf("%d ",b[k]);
        }
        printf("\n");
    }
    return 0;
}

