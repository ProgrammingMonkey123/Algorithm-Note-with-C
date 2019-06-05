//
// Created by hou on 2019/6/5.
//
#include <stdio.h>
#include <string.h>
int isEqual(char a[],char b[]){
    int a_l = strlen(a),b_l = strlen(b);
    if (a_l != b_l){
        return 0;
    } else{
        for (int i = 0; i< a_l; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    struct person{
        char name[20];
        int count;
    }leader[3] = {"Li",0,"Zhang",0,"Fun",0};
    int n;
    scanf("%d",&n);
    getchar();    //这个比较烦，scanf不能读入换行符。。。
    while (n--){
        char name[10];
        gets(name);
        if (isEqual(name,"Li")){
            leader[0].count++;
        } else if(isEqual(name,"Zhang")){
            leader[1].count++;
        } else{
            leader[2].count++;
        }
    }
    printf("%s:",leader[0].name);
    printf("%d\n",leader[0].count);
    printf("%s:",leader[1].name);
    printf("%d\n",leader[1].count);
    printf("%s:",leader[2].name);
    printf("%d\n",leader[2].count);
    return 0;
}