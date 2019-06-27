//
// Created by hou on 2019/6/9.
//
#include <cstdio>
#include <cstdlib>

using namespace std;

struct node{
    int data;
    node *next;
};

int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        node *head, *pre, *p;
        head = new node;
        head->next = NULL;
        pre = head;
        while (n--) {
            int i;
            scanf("%d", &i);
            p = new node;
            p->data = i;
            p->next = NULL;
            pre->next = p;
            pre = p;
        }
        int m;
        scanf("%d", &m);
        while (m--) {
            int j;
            scanf("%d", &j);
            p = new node;
            p->data = j;
            p->next = NULL;
            pre->next = p;
            pre = p;
        }
        node *l = head;
        l = l->next;
        while (l != NULL) {
            printf("%d ", l->data);
            l = l->next;
        }
        printf("\n");
    }
    return 0;
}
