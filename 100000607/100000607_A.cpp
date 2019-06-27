//
// Created by hou on 2019/6/9.
//
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct node{
    int data;
    node* next;
};

int n;

void get(node* head,int pos){
    if (pos >= 1 && pos <= n){
        node* p = head;
        for (int i = 0; i < pos; i++){
            p = p->next;
        }
        int b;
        b = p->data;
        printf("%d\n",b);
    } else {
        printf("get fail\n");
    }
}

void show(node* head){
    if(n) {
        node *p = head;
        p = p->next;
        while (p != NULL) {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    } else printf("Link list is empty\n");
}

void insert(node* head,int pos, int x){
    if (pos >= 1 && pos <= n + 1) {
        node *p = head;
        for (int i = 0; i < pos - 1; i++) {
            p = p->next;
        }
        node *q = new node;
        q->data = x;
        q->next = p->next;
        p->next = q;
        n = n + 1;
        printf("insert OK\n");
    } else printf("insert fail\n");

}

void del(node* head, int pos){
    if (n >= pos && pos >= 1) {
        node *p = head->next;
        node *pre = head;
        for (int i = 0; i < pos - 1; i++) {
            pre = p;
            p = p->next;
        }
        pre->next = p->next;
        delete (p);
        n = n - 1;
        printf("delete OK\n");
    } else printf("delete fail\n");
}

int main(){
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[n - i - 1]);
    }
    getchar();
    node *p,*pre,*head;
    head = new node;
    head->next = NULL;
    pre = head;
    for(int j = 0; j < n; j++){
        p = new node;
        p->data = a[j];
        p->next = NULL;
        pre->next = p;
        pre = p;
    }
    int m,op1,op2;
    char c[8];
    scanf("%d",&m);
    getchar();
    while (m--){
        scanf("%s",c);
        if(strcmp(c,"show") == 0){
            show(head);
            getchar();
        }
        else if(strcmp(c,"delete") == 0){
            scanf("%d",&op1);
            getchar();
            del(head,op1);
        }
        else if(strcmp(c,"insert") == 0){
            scanf("%d %d",&op1,&op2);
            getchar();
            insert(head,op1,op2);
        }
        else if(strcmp(c,"get") == 0){
            scanf("%d",&op1);
            getchar();
            get(head,op1);
        }
    }
    return 0;
}