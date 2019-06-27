//
// Created by hou on 2019/6/16.
//
//long long的最大范围为10的18次方，30次方超了
#include<stdio.h>
#include<string.h>
int main()
{

    char a[32];
    while(scanf("%s",a)!=EOF)
    {
        int b[32]={0};
        for(int i=0; i<strlen(a); i++)//将字符串转换为整数数组
            b[i] = a[i] - '0';

        int len = strlen(a),k=0,c=0, i=0;
        char ans[200];
        //printf("len = %d\n",len);
        while(i<len){
            ans[k++] = (b[len-1] % 2) + '0';
            c  = 0;//每一轮要清0
            //模拟一次整数除2的过程
            for(int j=i; j<len; j++)
            {
                int temp = b[j];
                b[j] = (b[j]+c) / 2 ;
                if(temp%2==1)//高位不够除2，把当前位借给后一位
                    c = 10;
                else
                    c = 0;
                if(b[i] == 0)
                    i++;
            }
        }
        //printf("k==%d\n",k);
        for(int j = k - 1; j >= 0; i--)
            printf("%c",ans[j]);
        printf("\n");
    }
}


