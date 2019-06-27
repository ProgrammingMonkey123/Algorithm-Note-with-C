//
// Created by hou on 2019/6/16.
//
#include <stdio.h>
#include <string.h>

int toInt(char a){
    int d;
    if(a >= '0' && a <= '9') d = a - '0';
    else if(a >= 'a' && a <= 'z') d = (a - 'a' + 10);
    else d = (a - 'A' + 10);
    return d;
}

char toChar(int a){
    if(a >= 0 && a <= 9) a = a + '0';
    else a = (a - 10) + 'A';
    return (char)a;
}

int main(){
    int a,b;
    char n[100];
    while (scanf("%d %s %d",&a,n,&b) != EOF) {
        if (a != 0 && b != 0) {
            int y = 0, p = 1, length = (int)strlen(n);
            for(int i = length - 1; i >= 0; i--){
                y += toInt(n[i]) * p;
                p = p * a;
            }
            int num = 0;
            char z[100];
            do {
                z[num++] = toChar(y % b);
                y = y / b;
            } while (y != 0);

            for (int i = num - 1; i >= 0; i--) {
                printf("%c", z[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

