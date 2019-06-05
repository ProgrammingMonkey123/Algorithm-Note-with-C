//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a > b){
        if(a > c){
            printf("%d",a);
        }
    }
    else if(b > c){
        printf("%d",b);
    } else{
        printf("%d",c);
    }
    return 0;
}
