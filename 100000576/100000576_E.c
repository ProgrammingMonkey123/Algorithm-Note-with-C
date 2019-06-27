//
// Created by hou on 2019/6/20.
//
#include <stdio.h>
#include <string.h>

struct student{
    int age;
    char num[10],name[100],sex[10];
}info[1000];

int main(){
    int m;
    scanf("%d",&m);
    while (m--){
        int N;
        scanf("%d",&N);
        for(int i = 0; i < N; i++){
            scanf("%s %s %s %d",info[i].num,info[i].name,info[i].sex,&info[i].age);
        }
        char b[10];
        scanf("%s",b);
        for(int j = 0; j < N; j++){
            if(strcmp(b, info[j].num) == 0){
                printf("%s %s %s %d\n",info[j].num,info[j].name,info[j].sex,info[j].age);
                break;
            }
        }
    }
    return 0;
}