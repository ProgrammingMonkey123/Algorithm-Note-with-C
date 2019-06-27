//
// Created by hou on 2019/6/8.
//
#include <cstdio>

using namespace std;
int main(){
    int n;
    while (true){
        scanf("%d",&n);
        if (n == 0) break;
        else{
            //getchar();
            while (n--){
                double x1,y1,x2,y2,x3,y3;
                scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
                double x_ = (x1 + x2 + x3) / 3.0,y_ = (y1 + y2 + y3) / 3.0;
                if (x_ >= 0) x_ = (int)(x_ * 10.0 + 0.5) / 10.0;   //保留固定位小数并四舍五入的好方法
                else x_ = (int)(x_ * 10.0 - 0.5) / 10.0;
                if (y_ >= 0) y_ = (int)(y_ * 10.0 + 0.5) / 10.0;
                else y_ = (int)(y_ * 10.0 - 0.5) / 10.0;
                printf("%.1lf %.1lf\n",x_,y_);
            }
        }
    }
    return 0;
}
