//
// Created by hou on 2019/6/7.
//
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

// 有关字符串指针的内容还需要再看看
vector <char*> vi[2510];

bool cmp(char* a, char* b){
    int n = strcmp(a,b);
    if(n < 0) return true;
    else return false;
}

int main(){
    int N,K,index,course_num;
    while (scanf("%d %d",&N,&K) != EOF){
        while (N--){
            char* name = new char[5];
            scanf("%s %d",name,&course_num);
            for (int i = 0; i < course_num; i++){
                scanf("%d",&index);
                vi[index].push_back(name);
            }
        }
        for (int k = 1; k <= K; k++){
            printf("%d %lld\n",k,vi[k].size());
            sort(vi[k].begin(),vi[k].end(),cmp);
            for (int j = 0; j < vi[k].size(); j++){
                printf("%s\n",vi[k][j]);
            }
        }
    }
    return 0;
}
