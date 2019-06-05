//
// Created by hou on 2019/5/22.
//
#include<stdio.h>
int main(){
    char a[20];
    char b[20];
    int n,i,j=0,k=0;
    gets(a);
    gets(b);
    for(int i=0;i< sizeof(a);i++){
        if(a[i]!=b[i]){
            n=a[i]-b[i];
            break;
        }else if(a[i]==b[i]){
            j++;
            continue;
        }
    }
    if(j == sizeof(a)){
        n=0;
    }
    printf("%d",n);
    return 0;
}

