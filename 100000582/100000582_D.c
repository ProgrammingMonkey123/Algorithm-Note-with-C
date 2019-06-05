//
// Created by hou on 2019/6/5.
//
#include <stdio.h>
#include <string.h>
int main(){
    char a[10010],b[10010];
    gets(a);
    gets(b);
    int hastTable[128];
    int a_l = (int)strlen(a),b_l = (int)strlen(b);
    for (int i = 0; i < b_l; i++){
        hastTable[(int)b[i]] = 1;
    }
    for (int j = 0; j < a_l; j++){
        if (hastTable[(int)a[j]] != 1){
            printf("%c",a[j]);
        }
    }
    return 0;
}
