//
// Created by hou on 2019/6/7.
//

//此程序未AC，报运行超时错误。另外，此程序输出未删除多余0，如按样例输入会输入2.795600e2
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main(){
    char a[10],b[10];
    while (scanf("%s %s",a,b) != EOF){
        int a_l = (int)strlen(a),b_l = (int)strlen(b);
        double c = 0,d = 0;  //c,d储存转换成的实数
        int f1 = 1,g1 = 0,h1 = 0,f2 = 1,g2 = 0,h2 = 0,k1 = 0,k2 = 0;  //f为0或1，记录是否有负号；g记录是否有小数点；h记录e后数字长度
        for(int i = 0; i < a_l; i++){
            if(a[i] == '-'){
                f1 = 0;
            }
            if(a[i] == '.'){
                g1 = a_l - i - 1;  //g记录小数点后长度，不含小数点
            }
            if(g1 == 0 && (a[i] == 'e' || a[i] == 'E')){   //无小数点有e
                sscanf(a + i + 1,"%d",&k1);
            }
            if(g1 > 0 && (a[i] == 'e' || a[i] == 'E')){
                h1 = a_l - i;
                g1 = g1 - h1;
                sscanf(a + i + 1,"%d",&k1);
            }
        }
        if(f1 == 1){  //说明没有负号
            for(int i = 0; i < a_l; i++){
                if(a[i] == 'e' || a[i] == 'E') break;
                else if(a[i] != '.')  c = c * 10 + a[i] - '0';
            }
        } else if(f1 == 0){   //说明有负号
            for(int i = 1; i < a_l; i++){
                if(a[i] == 'e' || a[i] == 'E') break;
                else if(a[i] != '.')  c = c * 10 + a[i] - '0';
            }
            c = -c;
        }
        while (g1--){
            c = c / 10;
        }
        while (k1--){
            c = c * 10;
        }

        //处理第二个字符串
        for(int i = 0; i < b_l; i++){
            if(b[i] == '-'){
                f2 = 0;
            }
            if(b[i] == '.'){
                g2 = b_l - i - 1;  //g记录小数点后长度，不含小数点
            }
            if(g2 == 0 && (b[i] == 'e' || b[i] == 'E')){   //无小数点有e
                sscanf(b + i + 1,"%d",&k2);
            }
            if(g2 > 0 && (b[i] == 'e' || b[i] == 'E')){
                h2 = b_l - i;
                g2 = g2 - h2;
                sscanf(b + i + 1,"%d",&k2);
            }
        }
        if(f2 == 1){  //说明没有负号
            for(int i = 0; i < b_l; i++){
                if(b[i] == 'e' || b[i] == 'E') break;
                else if(b[i] != '.')  d = d * 10 + b[i] - '0';
            }
        } else if(f2 == 0){   //说明有负号
            for(int i = 1; i < b_l; i++){
                if(b[i] == 'e' || b[i] == 'E') break;
                else if(b[i] != '.')  d = d * 10 + b[i] - '0';
            }
            d = -d;
        }
        while (g2--){
            d = d / 10;
        }
        while (k2--){
            d = d * 10;
        }
        double out = c + d;
        //将out转换成科学计数法的形式输出
        int count = 0;  //count记录科学计数法e后应该写几
        while (out > 10){
            out = out / 10;
            count ++;
        }
        while (out < 1){
            out = out * 10;
            count --;
        }
        if(count != 0){
            printf("%lf",out);
            printf("e%d\n",count);  //count可正可负
        } else if(count == 0){
            printf("%lf\n",out);
        }
    }
    return 0;
}
