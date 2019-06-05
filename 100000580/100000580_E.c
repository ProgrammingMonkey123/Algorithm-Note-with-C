//
// Created by hou on 2019/6/3.
//
#include <stdio.h>
#include <string.h>

int main(){
    char s[10000],c;
    while (gets(s) != NULL){
        c = getchar();
        int length = (int)strlen(s);
        for (int i=0;i<length;i++){
            if(s[i] != c){
                printf("%c",s[i]);
            }
        }
        printf("\n");
        getchar();
    }
    return 0;
}
