//
// Created by hou on 2019/5/23.
//
#include <stdio.h>

int main(){
    char* a = "I love China!";
    int n;
    scanf("%d",&n);
    if (n>=0 && n<13) {
        printf("%s\n", (a + n));
    }
    return 0;
}
