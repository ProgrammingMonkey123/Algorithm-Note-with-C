//
// Created by hou on 2019/5/30.
//
#include <stdio.h>

int main(){
    char a[200];
    char b[200];
    while (gets(a) != NULL){
        int count = 0;
        for (int i=0;i< (sizeof(a)/ sizeof(a[0]))-1;i++){
            if (a[i] == ' '){
                count++;
            }
            b[i] = a[i+count];
        }
        puts(b);
    }
    return 0;
}
