// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

vector<int> graph[MAX];
int dfs_num[MAX];
int dfs_low[MAX];
int parents[MAX];
int dfs_cnt;

void tarjan(int v){
	dfs_cnt++;
	dfs_num[v] = dfs_cnt;
	dfs_low[v] = dfs_cnt;
	
	for (auto &w : graph[v]){
		if (parents[w] == -1){								// if (not visited[w])
			parents[w] = v;									// Hey neighbor, I'm your father!
			tarjan(w);										// DFS
						
			dfs_low[v] = min(dfs_low[v], dfs_low[w]);
			
			if (dfs_low[w] > dfs_num[v])
				cout <<"Ponte: " << v << " <--> " << w << endl;
		}
		else if (parents[v] != w){							// if parents[v] == w --> LOOP
			dfs_low[v] = min(dfs_low[v], dfs_num[w]);
		}
	}
}

void inic(){
	dfs_cnt = 0;
	for(int i = 0; i < MAX; i++){
		graph[i].clear();
		parents[i] = -1;
		dfs_num[i] = 0;
		dfs_low[i] = 0;
	}
}

int main (){
	inic();
	int N, M;
	cin >> N >> M;
	
	// Populating GRAPH:
	for (int i = 1; i <= M; i++){
		int v,w;
		cin >> v >> w;
		graph[v].push_back(w);
		graph[w].push_back(v);
	}

	// Tarjan
	for (int v = 1; v <= N; v++)
		tarjan(v);
	
	return 0;
}