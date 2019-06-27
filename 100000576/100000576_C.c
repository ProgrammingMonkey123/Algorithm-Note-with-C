//
// Created by hou on 2019/6/20.
//
#include <stdio.h>
#include <string.h>

struct student{
    int age;
    char num[10],name[100],sex[5];
}info[1000];

int main(){
    int N;
    while (scanf("%d",&N) != EOF){
        for(int i = 0; i < N; i++){
            scanf("%s %s %s %d",info[i].num,info[i].name,info[i].sex,&info[i].age);
        }
        int M,flag;
        char b[10];
        scanf("%d",&M);
        for(int i = 0; i < M; i++){
            scanf("%s",b);
            flag = 0;
            for(int j = 0; j < N; j++){
                if(strcmp(b, info[j].num) == 0){
                    flag = 1;
                    printf("%s %s %s %d\n",info[j].num,info[j].name,info[j].sex,info[j].age);
                }
            }
            if(flag == 0) printf("No Answer!\n");
        }
    }
    return 0;
}