//
// Created by hou on 2019/5/30.
//
#include <stdio.h>
#include <string.h>
//自己写的，逻辑有问题
//int main(){
//    char a[20],b[100],x = 32;
//    gets(a);
//    int a_l = strlen(a);
//    while (gets(b) != NULL){
//        char c[100],d[100];
//        int k = 0,m = 0;
//        int b_l = strlen(b);
//        if(b_l < a_l){
//            int p = 0;
//            for(int n=0;n<b_l;n++){
//                if(b[n] != ' '){
//                    c[p++] = b[n];
//                }
//            }
//            printf("%s\n",c);
//            //printf("A Test!");
//            continue;
//        } else{
//            for(int i = 0;i< b_l - a_l + 1;i++){  //到b数组最后会有问题
//                int count = 0;
//                for (int j=0;j<a_l;j++){
//                    if(a[j] != b[i+j] && b[i+j] + x != a[j]){
//                        count ++;
//                    }
//                }
//                if (count == a_l){
//                    d[m++] = b[i];
//                }
//            }
//            for (int l=0;l<100;l++){
//                if (d[l]!= ' '){
//                    c[k++] = d[l];
//                }
//            }
//        }
//        printf("%s\n",c);
//    }
//    return 0;
//}

//将输入的两个字符统一到小写，然后比较是否相等
int compare(char a,char b){
    if (a>='A' && a <= 'Z'){
        a = a - 'A' + 'a';
    }
    if (b >= 'A' && b <= 'Z'){
        b = b - 'A' + 'a';
    }
    if (a == b){
        return 1;
    } else{
        return 0;
    }
}
char substr[1005];
char str[1005];
int main(){
    int i,j;
    gets(substr);
    int sublen = strlen(substr);
    while (gets(str) != NULL){
        int len = strlen(str);
        i = 0, j = 0;
        while (i < sublen && j<len){
            if(compare(substr[i],str[j])){
                i++;
                j++;
                if (i == sublen){
                    i = 0;
                }
            } else{
                j = j - i + 1; //每一个sublen一个单位，不完全符合就回到比较起点的下一位
                if(str[j-1] != ' '){
                    printf("%c",str[j - 1]); //说明比较起点不合适，可以输出
                }
                i = 0;
            }
        }
        if(j == len){
            printf("\n");
        }
    }
    return 0;
}