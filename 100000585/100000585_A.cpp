//
// Created by hou on 2019/6/11.
//

//本来以为需要先确保升序排列的，但是重排列之后下标就变了
//题目给的测试数据默认都是升序的，不需要重排序
#include <cstdio>
#include <cstring>

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
        //sort(a,a + n);
        scanf("%d",&x);
        printf("%d\n",binarySearch(a));
    }
    return 0;
}