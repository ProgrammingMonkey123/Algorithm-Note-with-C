//
// Created by hou on 2019/6/3.
//
#include <string.h>
#include <stdio.h>

int main(){
    int raw_num,a_length,b_length;
    char a[100],b[100];
    scanf("%d",&raw_num);
    while (raw_num--){
        scanf("%s",a);
        getchar();
        scanf("%s",b);
        a_length = strlen(a);
        b_length = strlen(b);
        if (a_length > b_length){
            printf("%s ",a);
            printf("is longer than ");
            printf("%s\n",b);
        } else if(a_length == b_length){
            printf("%s ",a);
            printf("is equal long to ");
            printf("%s\n",b);
        } else{
            printf("%s ",a);
            printf("is shorter than ");
            printf("%s\n",b);
        }
    }
    return 0;
}
