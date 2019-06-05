//
// Created by hou on 2019/5/27.
//
#include <stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    } else{
        return gcd(b,a % b);
    }
}
int main(){
    int n;
    while (scanf("%d",&n) != EOF) {
        while (n--) {
            int m;
            scanf("%d", &m);
            int a[m];
            for (int i = 0; i < m; i++) {
                scanf("%d", &a[i]);
            }
            int out = a[0]; //两两取最小公倍数，需要取其中最大的   !! 这个思路可能有问题，什么问题呢？？！！
            for (int j = 1; j < m; j++) {
                out = out / (gcd(out,a[j])) * a[j];
            }
            printf("%d\n", out);
        }
    }
    return 0;
}
//#include<cstdio>
//int gcd( int a , int b )
//{
//    if( b == 0 ) return a;
//    else return gcd( b, a%b );
//}
//int lcm( int a , int b )
//{
//    int d = gcd(a,b);
//    return a / d * b;
//}
//int main()
//{
//    int n,m;
//    while(scanf("%d",&n)!=EOF)
//    {
//        while(n--)
//        {
//            scanf("%d",&m);
//            int num[m];
//            for(int i=0;i<m;i++)
//            {
//                scanf("%d",&num[i]);
//            }
//            int res=num[0];
//            for(int i=1;i<m;++i){
//                res= lcm(res,num[i]);
//            }
//            printf("%d\n",res);
//        }
//    }
//    return 0;
//}
///**************************************************************
//    Problem: 2136
//    User: 2015212040209
//    Language: C++
//    Result: 正确
//    Time:0 ms
//    Memory:1116 kb
//****************************************************************/
