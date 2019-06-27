//
// Created by hou on 2019/6/8.
//
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string str;
    while (getline(cin, str)){
        reverse(str.begin(),str.end());
        printf("%s\n",str.c_str());
    }
    return 0;
}
