//
// Created by hou on 2019/6/8.
//
//如果有()还要再复杂一些，还需要再看
#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <map>
using namespace std;

struct node{
    double num;
    char op;
    bool flag;    //true表示数字，false表示操作符
};

string str;
stack <node> s;  //操作符栈
queue <node> q;  //存后缀表达式的队列，用栈也是一样的
map <char, int> op;

void Change(){    //将中缀表达式转换为后缀表达式
    double num;
    node temp;
    for (int i = 0; i < str.length();){
        if(str[i] >= '0' && str[i] <= '9'){
            temp.flag = true;  //表示是数字
            temp.num = str[i++] - '0';
            while (i < str.length() && str[i] >= '0' && str[i] <= '9'){
                temp.num = temp.num * 10 + (str[i] - '0');   //如果数字有多位
                i++;
            }
            q.push(temp);
        } else{
            temp.flag = false;  //表示是操作符
            //如果操作符栈的栈顶元素比该操作符优先级高，就把操作符栈顶元素弹出到后缀表达式队列中
            while (!s.empty() && op[str[i]] <= op[s.top().op]){
                q.push(s.top());
                s.pop();
            }
            temp.op = str[i];
            s.push(temp);     //如果操作符栈栈顶元素比该操作符优先级低，则直接将该操作符压栈
            i++;
        }
    }
    while (!s.empty()){    //如果操作符栈中还有操作符，就将其依次出栈
        q.push(s.top());
        s.pop();
    }
}
double Cal(){    //计算后缀表达式
    double temp1,temp2;
    node cur,temp;
    while (!q.empty()){
        cur = q.front();
        q.pop();
        if(cur.flag == true) s.push(cur);  //如果是数，直接压栈
        else{
            temp2 = s.top().num;
            s.pop();
            temp1 = s.top().num;
            s.pop();
            temp.flag = true;
            if(cur.op == '+') temp.num = temp1 + temp2;
            else if(cur.op == '-') temp.num = temp1 - temp2;
            else if(cur.op == '*') temp.num = temp1 * temp2;
            else if (cur.op == '/') temp.num = temp1 / temp2;
            s.push(temp);
        }
    }
    return s.top().num; //栈顶元素就是后缀表达式的值
}

int main(){
    op['+'] = op['-'] = 1;
    op['*'] = op['/'] = 2;
    while (getline(cin,str),str != "0"){
        for(string::iterator it = str.end(); it != str.begin(); it--){
            if(*it == ' ') str.erase(it);
        }
        while (!s.empty()) s.pop();
        Change();
        printf("%.2f\n",Cal());
    }
    return 0;
}