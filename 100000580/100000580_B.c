//
// Created by hou on 2019/5/30.
//
#include <stdio.h>

int main(){
    char a[100];
    char b = 32;
    while (gets(a) != NULL){
        if (a[0]>90){
            a[0] = a[0] - b;
        }
        for (int i=0;i< sizeof(a)/ sizeof(a[0]);i++){
            if (a[i] == ' ' && i+1 < sizeof(a)/ sizeof(a[0]) && a[i+1]>90){
                a[i+1] = a[i+1] - b;
            }
        }
        puts(a);
    }
    return 0;
}
