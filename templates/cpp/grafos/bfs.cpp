// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
using ii = pair<int,int>;

vector<int> graph[MAX];
int dist[MAX];
int k;												// How many connected components

void bfs(int source){
	queue <int> q;
	dist[source] = 0;
	q.push(source);
	
	while (not q.empty()){
		int v = q.front(); q.pop();
		
		for (auto &w : graph[v]){
			if (dist[w] == -1){
				dist[w] = dist[v] + 1;
				q.push(w);
			}
		}
	}
	
}

void inic(){
	k = 0;
	for (int v = 0; v < MAX; v++){
		graph[v].clear();
	}
	memset(dist,-1,sizeof(dist));
}

int main (){
	inic();
	
	int N, M;
	cin >> N >> M;
	
	// Populating Graph:
	for (int i = 1; i <= M; i++){
		int v, w;
		cin >> v >> w;
		
		graph[v].push_back(w);
		graph[w].push_back(v);
	}
	
	// Travesing Graph:
	for (int v = 1; v <= N; v++){
		if (dist[v] == -1){
			bfs(v);
			k++;
		}
	}

	return 0;
}
