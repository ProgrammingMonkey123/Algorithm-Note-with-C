//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    char str[10000];
    scanf("%s",str);
    int i;
    char a1 = 26, a2 = 96,a3 = 122,a4 = 64,a5 = 1;
    for (i=0;i<10000;i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] = a1 - (str[i] - a4) + a4 + a5;
        }
        if(str[i] >= 97 && str[i] <= 122){
            str[i] = a1 - (str[i] - a2) + a2 + a5;
        }
    }
    printf("%s",str);
    return 0;
}
