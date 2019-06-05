//
// Created by hou on 2019/5/22.
//
#include <stdio.h>

int main(){
    double a,b,c,temp1,temp2,temp3;
    scanf("%lf %lf %lf",&a,&b,&c);
    while(a>b || b>c || a>c) {
        if (a > b) {
            temp1 = a;
            a = b;
            b = temp1;
        }
        if (b > c) {
            temp2 = b;
            b = c;
            c = temp2;
        }
        if (a > c) {
            temp3 = a;
            a = c;
            c = temp3;
        }
    }
    printf("%.2f %.2f %.2f",a,b,c);
    return 0;
}
