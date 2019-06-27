//
// Created by hou on 2019/6/8.
//
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s,str[100000];
    map<string,int> a;
    char b[1100000];
    int maxn = 0;
    while(cin.getline(b,1100000)) {
        for (int i = 0; b[i]; i++) {
            bool flag = true;
            if ((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= '0' && b[i] <= '9')) {
                flag = false;
                s += b[i];
            } else if (b[i] >= 'A' && b[i] <= 'Z') {
                flag = false;
                s += (b[i] + 32);
            }
            if ((flag || !b[i + 1]) && !s.empty()) {   // 这里一定要考虑最后一个单词即把!b[i+1]作为终止的条件之一
                if (!a.count(s)) {
                    a[s] = 0;
                }
                a[s]++;
                if (a[s] > maxn) {
                    maxn = a[s];
                }
                s.clear();
            }
        }
        int k = 0;
        for (map<string, int>::iterator it = a.begin(); it != a.end(); it++) {
            if (it->second == maxn) str[k++] = it->first;
        }
        string d = str[0];
        for (int j = 0; j < k; j++) {
            d = min(d, str[j]);
        }
        printf("%s %d\n", d.c_str(), maxn);
        a.clear();
        s.clear();
        maxn = 0;
        for(int j = 0; j < k; j++){
            str[j].clear();
        }
    }
    return 0;
}
