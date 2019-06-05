//
// Created by hou on 2019/6/3.
//
#include <stdio.h>
#include <string.h>
int main(){
    char a[300],b[300];
    gets(a);
    int length = (int)strlen(a);
    for(int i=0;i<length;i++){
        b[i] = a[length - i -1];
    }
    int count = 0;
    for (int j=0;j<length;j++){
        if(a[j] == b[j]){
            count++;
        }
    }
    if(count == length){
        printf("YES");
    } else{
        printf("NO");
    }

    return 0;
}
