//
// Created by hou on 2019/6/3.
//
#include <stdio.h>
#include <string.h>

int main(){
    char a[200],b[200],c[200];
    while (gets(a) != NULL){
        gets(b);
        gets(c);
        int i = 0,j = 0,a_l,b_l;
        a_l = (int)strlen(a);
        b_l = (int)strlen(b);
        while (i < a_l && j < b_l){
            if(a[i] == b[j]){
                i++;
                j++;
                if(j == b_l){
                    j = 0;
                    printf("%s",c);
                }
            } else{
                i = i - j + 1;
                printf("%c",a[i - 1]);
                j = 0;
            }
        }
        if (i == a_l){
            printf("\n");
        }
    }
    return 0;
}
