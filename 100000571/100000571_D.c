//
// Created by hou on 2019/5/23.
//

#include <stdio.h>
#include <string.h>
void swap1(char *s1,char *s2){
    char d[20];
    char* p4 = d;
    strcpy(p4,s1);
    strcpy(s1,s2);
    strcpy(s2,p4);
}
void swap2(char *r1,char *r2,char *r3){
    if (strcmp(r1,r2)>0) swap1(r1,r2);
    if (strcmp(r1,r3)>0) swap1(r1,r3);
    if (strcmp(r2,r3)>0) swap1(r2,r3);
}
int main(){
    char a[20],b[20],c[20];
    gets(a);
    gets(b);
    gets(c);
    char *p1 = a,*p2 = b,*p3 = c;
    swap2(p1,p2,p3);
    puts(p1);
    puts(p2);
    puts(p3);
    return 0;
}