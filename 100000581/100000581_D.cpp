//
// Created by hou on 2019/6/14.
//
//这个题也是用sort函数很方便
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

bool cmp(char a, char b){
    return a < b;
}

int main(){
    char a[300];
    while (gets(a) != NULL){
        int l = 0;
        for(int i = 0; i < 300; i++){
            if(a[i] != '\0') l++;
            else break;
        }
        sort(a,a+l,cmp);
        printf("%s\n",a);
    }
    return 0;
}
