//
// Created by hou on 2019/5/23.
//
#include <stdio.h>
#include <string.h>
void vowels(char s1[],char s2[]){
    int l = strlen(s1);
    int i,j=0;
    for (i=0;i<l;i++){
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i'
        || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A'||
        s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' ||
        s1[i] == 'U'){
            s2[j++]=s1[i];
        }
    }
    printf("%s",s2);
}
int main(){
    char str1[100],str2[100];
    gets(str1);
    vowels(str1,str2);
    return 0;
}
