//
// Created by hou on 2019/6/7.
//
#include <cstdio>
#include <set>

using namespace std;

int main(){
    set <int> a[60];
    int N,M,K,index = 1;
    scanf("%d",&N);
    while (N--){
        scanf("%d",&M);
        while (M--){
            scanf("%d",&K);
            a[index].insert(K);
        }
        index++;
    }
    scanf("%d",&K);
    while (K--){
        int c,t;
        scanf("%d %d",&c,&t);
        set <int> N_c;
        for(set<int>::iterator it1 = a[c].begin();it1 != a[c].end();it1++){
            N_c.insert(*it1);
        }
        for(set<int>::iterator it2 = a[t].begin();it2 != a[t].end();it2++){
            N_c.insert(*it2);
        }
        printf("%.1f%\n",((a[c].size()+a[t].size() - N_c.size()) * 100.0) / N_c.size() * 1.0);
    }
    return 0;
}
