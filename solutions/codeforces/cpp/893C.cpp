#include<bits/stdc++.h>
#define MAX 100010
#define oo 0x3f3f3f3f

using namespace std;

vector<int> graph[MAX];
long long int preco[MAX];
long long int ilhas[MAX];
bool visited[MAX];
long long int menor;

int dfs(int v, int ilha){
    if(preco[v] < menor){
        menor = preco[v];
    }
    visited[v] = true;
    for(auto &w: graph[v]){
        if(not visited[w]){
            dfs(w, ilha);
        }
    }
}

int main(){
    memset(ilhas, 0, sizeof(ilhas));
    memset(visited, false, sizeof(visited));
    long long int m, n;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> preco[i];
    }
    int v, w;
    for(int i = 1; i <= m; i++){
        cin >> v >> w;
        graph[v].push_back(w);
        graph[w].push_back(v);
    }
    int ilha = 0;
    for(int v = 1; v <= n; v++){
        if(not visited[v]){
            menor = oo;
            dfs(v, ilha);
            ilhas[ilha] = menor;
            ilha++;
        }
    }
    long long int sum = 0;
    for(int i = 0; i < n; i++)
        sum += ilhas[i];
    printf("%lld\n", sum);
}