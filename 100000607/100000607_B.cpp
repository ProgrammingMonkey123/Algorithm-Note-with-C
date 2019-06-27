//
// Created by hou on 2019/6/9.
//
/*用链表写的，比较麻烦，没成功，报段错误
 * #include <cstdio>
#include <cstdlib>

using namespace std;

struct node{
    int num;
    int score;
    node* next;
};

int main(){
    int a,b,num,score;
    while (scanf("%d %d",&a,&b) != EOF) {
        //getchar();
        node *head, *p, *pre;
        head = new node;
        head->next = NULL;
        pre = head;
        int sum = a + b;
        for (int i = 0; i < sum; i++) {
            scanf("%d %d", &num, &score);
            //getchar();
            p = new node;
            p->next = NULL;
            p->num = num;
            p->score = score;
            pre->next = p;
            pre = p;
        }
        node *l1, *l2, *pre1;
        pre1 = head;
        l1 = head->next;
        l2 = l1->next;
        for (int j = 1; j < (a + b); j++) {
            while (l2 != NULL) {
                if (l1->num > l2->num) {
                    pre1->next = l2;
                    l1->next = l2->next;
                    l2->next = l1;
                } else {
                    pre1 = l1;
                    l1 = l2;
                    l2 = l2->next;
                }
            }
            pre1 = head;
            l1 = head->next;
            l2 = l1->next;
        }
        node *L = head;
        L = L->next;
        while (L != NULL) {
            printf("%d %d\n", L->num, L->score);
            L = L->next;
        }
    }
    return 0;
}
 */
#include<iostream>
#include<algorithm>

using namespace std;

struct node {
    int id, score;
}a[100000];

bool cmp(node a, node b) {
    return a.id < b.id;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        for (int i = 0; i < m + n; i++) {
            cin >> a[i].id >> a[i].score;
        }
        sort(a, a + n + m, cmp);
        for (int i = 0; i < m + n; i++) {
            cout << a[i].id << " " << a[i].score << endl;
        }
    }
    return 0;
}
