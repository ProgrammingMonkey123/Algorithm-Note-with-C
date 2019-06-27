//
// Created by hou on 2019/6/9.
//
//哦这个输入不一定是递增输入的，要先把乱序输入的变成递增输入
//哦这个程序的一开始的问题是如果找不到的话要把那个数插入这个没做。。。还是读题不仔细，当前版本是改对的
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct node{
    int data;
    node *next;
};

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        int m,d,pos;
        scanf("%d",&m);
        int b[m + 1];
        node *head,*pre,*p;
        head = new node;
        head->next = NULL;
        pre = head;
        bool flag = false;
        for (int i = 0; i < m; i++) {
            scanf("%d", &d);
            b[i] = d;
            if (d == n) {
                flag = true;
                pos = i;
            }
        }
        if(flag && pos == m - 1){
            printf("相同元素为：%d\n交换后的链表为：",n);
        }
        else if(flag){
            sort(b,b+m);
            for(int k = 0; k < m; k++) {
                p = new node;
                p->data = b[k];
                p->next = NULL;
                pre->next = p;
                pre = p;
            }
            printf("相同元素为：%d\n交换后的链表为：",n);
            node *t,*s,*pre1;
            pre1 = head;
            s = head->next;
            t = s->next;
            for(int j = 0; j < pos; j++){   //循环结束时应让s指向输入元素
                pre1 = s;
                s = t;
                t = t->next;
            }
            pre1->next = t;
            s->next = t->next;  //要注意这个顺序，如果先改t->next的话就变成死循环了
            t->next = s;
        } else{
            b[m] = n;
            sort(b,b+m+1);
            for(int k = 0; k <= m; k++) {
                p = new node;
                p->data = b[k];
                p->next = NULL;
                pre->next = p;
                pre = p;
            }
            printf("no\n");

        }
        node *L = head;
        L = L->next;
        while (L != NULL){
            printf("%d ",L->data);
            L = L->next;
        }
        printf("\n");
    }
    return 0;
}
