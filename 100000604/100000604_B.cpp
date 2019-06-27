//
// Created by hou on 2019/6/8.
//
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string a;
    while (cin >> a) {
        do {
            printf("%s\n", a.c_str());
        } while (next_permutation(a.begin(), a.end()));
        printf("\n");
    }
    return 0;
}


