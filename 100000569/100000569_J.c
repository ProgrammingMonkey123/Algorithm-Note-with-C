//
// Created by hou on 2019/5/23.
//
#include <stdio.h>
#include <string.h>
int main(){
    char str1[10000],str2[10000],str3[10000];
    gets(str1);
    gets(str2);
    gets(str3);
    if (strcmp(str1,str2)>0) {
        if (strcmp(str1, str3) > 0) {
            printf("%s", str1);
        }
    }
    else if((strcmp(str2,str3))>0){
        printf("%s",str2);
    } else{
        printf("%s",str3);
        }
    return 0;
}
