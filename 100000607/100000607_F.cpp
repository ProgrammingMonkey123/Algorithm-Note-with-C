//
// Created by hou on 2019/6/9.
//
#include <cstdio>
#include <set>

using namespace std;

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        if(n == 0){
            printf("list is empty\n");
        } else {
            int a[n], m;
            set<int> b;
            for (int i = 0; i < n; i++) {
                scanf("%d", &m);
                a[i] = m;
                b.insert(m);
                printf("%d ", m);
            }
            printf("\n");
            for(set<int>::iterator it = b.begin();it!=b.end();it++){
                printf("%d ",*it);
            }
            printf("\n");
        }
    }
    return 0;
}
