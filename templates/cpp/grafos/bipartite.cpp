// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 100000
#define WHITE -1
#define BLUE 0
#define RED 1

using namespace std;
vector<int> graph[MAX];
int colors[MAX];
int k;

bool isBipartite(int source){
	queue <int> q;
	q.push(source);
	colors[source] = BLUE;
	
	while(not q.empty()){
		int v = q.front(); q.pop();
		
		for (auto &w : graph[v]){
			if (colors[w] == WHITE){
				colors[w] = !colors[v];
				q.push(w);
			}else if(colors[w] == colors[v]){
				return false;
			}
		}
	}
	
	return true;
}

void inic(){
	k = 0;
	for (int v = 0; v < MAX; v++){
		colors[v] = WHITE;
		graph[v].clear();
	}
}

int main (){
	inic();
	
	int N, M;
	cin >> N >> M;
	
	// Populating Graph:
	for (int i = 1; i <= M; i++){
		int v,w;
		cin >> v >> w;
		graph[v].push_back(w);
		graph[w].push_back(v);
	}
	
	// Is Bipartite ?
	bool ans = true;
	for (int v = 1; v <= N; v++){
		if (colors[v] == WHITE){
			ans &= isBipartite(v);
			k++;
		}
	}
	cout << ans << endl;

	return 0;
}