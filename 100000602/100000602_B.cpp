//
// Created by hou on 2019/6/8.
//
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int main(){
    stack <char> a;
    int n;
    char str[1000];
    scanf("%d",&n);
    getchar();
    while (n--){
        bool flag = true;
        while (!a.empty()){
            a.pop();
        }
        gets(str);
        for(int i = 0; i < strlen(str); i++){
            if (str[i] == '(' || str[i] == '[' || str[i] == '{'){
                a.push(str[i]);
            }
            if(!a.empty()){
                char top = a.top();
                if(top == '(' && str[i] == ')'){
                    a.pop();
                    continue;
                }
                if(top == '[' && str[i] == ']'){
                    a.pop();
                    continue;
                }
                if(top == '{' && str[i] == '}'){
                    a.pop();
                    continue;
                }
            }
            if(a.empty() &&(str[i] == ')'|| str[i] == ']'|| str[i] == '}')) {
                flag = false;
                break;
            }
        }
        if(a.empty() && flag){
            printf("yes\n");
        } else printf("no\n");
    }
    return 0;
}
