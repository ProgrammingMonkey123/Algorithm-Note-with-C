//
// Created by hou on 2019/5/23.
//
#include<stdio.h>
void input(int* p){
    for(int i=0;i<10;i++){
        scanf("%d",p+i);
    }
}
void sort(int* p){
    int min,max,t,temp;
    min=*p;
    max=*p;
    for(int i=0;i<10;i++){
        if(min>=*(p+i)){
            min=*(p+i);
            t=i;
        }
    }
    temp=*(p+t);
    *(p+t)=*p;
    *p=temp;
    for(int i=0;i<10;i++){
        if(max<=*(p+i)){
            max=*(p+i);
            t=i;
        }
    }
    temp=*(p+t);
    *(p+t)=*(p+9);
    *(p+9)=temp;
}
void output(int* p){
    for(int i=0;i<10;i++){
        printf("%d ",*(p+i));
    }
}
int main(){
    int a[10];
    input(a);
    sort(a);
    output(a);
}


