// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 100000
#define oo 0x3F3F3F3F
using namespace std;
using ii = pair<int, int>;

vector<ii> graph[MAX];
int dist[MAX];
int k;

void dijkstra(int source){
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	dist[source] = 0;
	pq.push(ii(0,source));
	
	while (not pq.empty()){
		int dist_v, v;
		tie(dist_v, v) = pq.top(); pq.pop();
		
		if (dist[v] < dist_v) continue;							// Fake shortest path
		
		for (auto &neighbor : graph[v]){
			int weight_vw;
			int w;
			tie(weight_vw, w) = neighbor;
			
			int dist_w = dist_v + weight_vw;					// Parent's dist + Edge's weight
			
			if (dist_w < dist[w]){								// Found shorted path:
				pq.push(ii(dist_w, w));
				dist[w] = dist_w;
			}
		}
	}
}

void inic(){
	k = 0;
	
	memset(dist, -1, sizeof(dist));
	
	for (int i = 0; i < MAX; i++){
		graph[i].clear();
	}
}
int main(){
	int N, M;
	cin >> N >> M;
	
	// Populating Graph:
	for (int i = 1; i <= M; i++){
		int v, w, weight;
		cin >> v >> w >> weight;
		
		graph[v].push_back(ii(weight,w));
		graph[w].push_back(ii(weight,v));
	}
	
	// Find Shortest Path From Source To Any Node:
	int source;
	cin >> source;
	dijkstra(source);
	
	
	return 0;
}
