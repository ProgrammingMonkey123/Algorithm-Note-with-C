//
// Created by hou on 2019/5/26.
//
#include <stdio.h>

int main(){
    int a;
    while (scanf("%d",&a) != EOF){
        if ((a * a) / 1000 > 0){
            if ((a * a) % 100 == a){
                printf("Yes!\n");
            } else{
                printf("No!\n");
            }
        } else if((a * a) / 100 > 0){
            if ((a * a) % 100 == a){
                printf("Yes!\n");
            } else{
                printf("No!\n");
            }
        }else if((a * a) / 10 > 0){
            if ((a * a) % 10 == a){
                printf("Yes!\n");
            } else{
                printf("No!\n");
            }
        }
        else{
            printf("No!\n");
        }
    }
    return 0;
}
