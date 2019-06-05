//
// Created by hou on 2019/5/23.
//
#include <stdio.h>
#include <string.h>
void reverse(char a[]){
    int l = strlen(a);
    int i;
    for(i=0;i<l;i++){
        printf("%c",a[l-i-1]);
    }
}
int main(){
    char a[10000];
    gets(a);
    reverse(a);
    return 0;
}
