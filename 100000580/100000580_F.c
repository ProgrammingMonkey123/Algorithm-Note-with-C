//
// Created by hou on 2019/6/3.
//
#include <string.h>
#include <stdio.h>

int main(){
    char a[300];
    while (gets(a) != NULL){
        int length = (int)strlen(a);
        for (int i=0;i<length;i++){
            printf("%c",a[length-i-1]);
        }
        printf("\n");
    }
    return 0;
}
