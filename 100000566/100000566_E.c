#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double d = b*b-4*a*c;
    if(a&&d>0){
        double e = sqrt(d);
        double r1 = ((-b+e)/(2*a));
        double r2 = ((-b-e)/(2*a));
        printf("r1=%7.2f\n",r1);
        printf("r2=%7.2f",r2);
    }
    return 0;
}

