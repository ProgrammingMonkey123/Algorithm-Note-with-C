//
// Created by hou on 2019/6/5.
//
#include <string.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    while (n--){
        struct student {
            int num;
            char name[20];
            char sex;
            int age;
        }*s;
        int num;
        char name[20];
        char sex;
        int age;
        scanf("%d %s %c %d",&num,name,&sex,&age);
        (*s).num = num;
        for (int i=0;i<25;i++){
            (*s).name[i] = name[i];
        }
        (*s).sex = sex;
        (*s).age = age;
        printf("%d ",(*s).num);
        printf("%s ",(*s).name);
        printf("%c ",(*s).sex);
        printf("%d\n",(*s).age);
    }
    return 0;
}
