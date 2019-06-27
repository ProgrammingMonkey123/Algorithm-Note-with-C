#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int hashFunc(char a[]){
    int id = 0;
    for (int i = 0; i < 3; i++){    //这里已经能确定每个名字的格式
        id = id * 26 + (a[i] - 'A');
    }
    id = id * 10 + a[3] - '0';
    return id;
}
vector <int> vi[176170];
int main(){
    int N,K;
    int index,stud_num;
    char stud_name[4];
    while (scanf("%d %d",&N,&K) != EOF){
        while (K--){
            scanf("%d %d",&index,&stud_num);
            for (int i = 0; i < stud_num; i++){
                scanf("%s",stud_name);
                vi[hashFunc(stud_name)].push_back(index);
            }
        }
        while (N--){   //处理最后一行
            scanf("%s",stud_name);
            printf("%s %d",stud_name,vi[hashFunc(stud_name)].size());
            sort(vi[hashFunc(stud_name)].begin(),vi[hashFunc(stud_name)].end());
            for (int j = 0; j < vi[hashFunc(stud_name)].size(); j ++){
                printf(" %d",vi[hashFunc(stud_name)][j]);
            }
            printf("\n");
        }
    }
    return 0;
}