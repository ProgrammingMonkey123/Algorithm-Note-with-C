//
// Created by hou on 2019/6/11.
//
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n,x;
int binarySearch(int a[]){
    int left = 0, right = n - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x) return mid;
        else if(a[mid] > x){
            right = mid - 1;
        } else if (a[mid] < x){
            left = mid + 1;
        }
    }
    return -1;
}
int main(){
    while (scanf("%d",&n) != EOF){
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        sort(a,a + n);
        int m;
        scanf("%d",&m);
        while (m--) {
            scanf("%d", &x);
            if(binarySearch(a) >= 0){
                printf("YES\n");
            } else{
                printf("NO\n");
            }
        }
    }
    return 0;
}