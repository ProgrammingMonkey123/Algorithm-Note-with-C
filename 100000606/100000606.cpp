//
// Created by hou on 2019/6/8.
//
#include<cstdio>

using namespace std;

int a[10];

void input(){
    int n;
    for (int i = 0; i < 10; i++){
        scanf("%d",&n);
        a[i] = n;
    }
}

void swap(){
    int min = a[0], min_p = 0;
    for (int i = 0; i < 10; i++){
        if(a[i] < min){
            min = a[i];
            min_p = i;
        }
    }
    int temp1,temp2;
    temp1 = a[0];
    a[0] = min;
    a[min_p] = temp1;
    int max = a[0], max_p = 0;
    for (int j = 0; j < 10; j++){   //必须写两个循环，否则交换最小值时位置会变
        if(a[j] > max){
            max = a[j];
            max_p = j;
        }
    }
    temp2 = a[9];
    a[9] = max;
    a[max_p] = temp2;
}
void output(){
    for(int i = 0; i < 10; i++){
        printf("%d ",a[i]);
    }
}

int main(){
    input();
    swap();
    output();
    return 0;
}
