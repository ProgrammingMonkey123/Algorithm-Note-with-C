//
// Created by hou on 2019/6/14.
//
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int s[10];
struct student{
    char ID[20];
    int num;
    int num_list[10];
    int sum;
}a[10010];

bool cmp(student a, student b){
    return a.sum > b.sum;
}
int main(){
    int N,M,G;
    while (scanf("%d %d %d",&N,&M,&G) != EOF){
        if(N == 0) break;
        int b[M];
        for(int i = 0; i < M; i++){
            scanf("%d",&b[i]);
        }
        for(int i = 0; i < N; i++){
            int sum = 0;
            scanf("%s %d",a[i].ID,&a[i].num);
            for(int j = 0; j < a[i].num; j++){
                scanf("%d",&a[i].num_list[j]);
                sum = sum + b[a[i].num_list[j] - 1];
            }
            a[i].sum = sum;
        }
        sort(a,a + N,cmp);
        int count = 0;
        for(int i = 0; i < N; i++){
            if(a[i].sum >= G) count++;
        }
        printf("%d\n",count);
        for(int i = 0; i < count; i++){
            printf("%s %d\n",a[i].ID,a[i].sum);
        }
    }
    return 0;
}
