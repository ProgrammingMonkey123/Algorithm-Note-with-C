//
// Created by hou on 2019/6/14.
//

//这个题比较无聊，就用algorithm的sort函数做吧
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

struct student{
    char ID[10];
    char name[10];
    int score;
}info[100010];

bool Case_1(student a, student b){
    return strcmp(a.ID,b.ID) < 0;
}

bool Case_2(student a, student b){
    if(strcmp(a.name, b.name) == 0) return strcmp(a.ID, b.ID) < 0;
    else return strcmp(a.name,b.name) < 0;
}

bool Case_3(student a, student b){
    if(a.score == b.score) return strcmp(a.ID, b.ID) < 0;
    else return a.score < b.score;
}

int main(){
    int N,C,num = 1;
    while (scanf("%d %d",&N,&C) != EOF){
        if(N == 0) break;
        else{
            for(int i = 0; i < N; i++){
                scanf("%s %s %d",info[i].ID,info[i].name,&info[i].score);
            }
            if(C == 1) sort(info,info + N, Case_1);
            else if(C == 2) sort(info,info + N, Case_2);
            else if (C == 3) sort(info,info + N, Case_3);
            printf("Case %d:\n",num++);
            for(int i = 0; i < N; i++){
                printf("%s %s %d\n",info[i].ID ,info[i].name ,info[i].score);
            }
        }
    }
    return 0;
}