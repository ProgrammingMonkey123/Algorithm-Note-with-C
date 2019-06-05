//
// Created by hou on 2019/5/27.
//
#include <stdio.h>
int main(){
    int x,a,b,c,d;
    for(x = 1000;x<=9999;x++) {
        a = x % 10; //个位
        b = (x / 10) % 10; //十位
        c = (x / 100) % 10; //百位
        d = (x / 1000); //千位
        if (9 * x == a * 1000 + b * 100 + c * 10 + d) {
            printf("%d", x);
        }
    }
    return 0;
}
