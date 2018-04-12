// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
using ii = pair<int,int>;
vector<ii> graph[MAX];

class UnionFind{
	public:
		vector<int> parents;
		
		UnionFind(int N):parents(N+1){
			for (int v = 1; v <= N; v++){
				parents[v] = v;
			}
		}
		
		int find_set(int v){
			return parents[v] == v ? v : parents[v] = find_set(parents[v]);
		}
		
		bool same_set(int v, int w){
			return find_set(v) ==  find_set(w);
		}
		
		void union_set(int v, int w){
			if (same_set(v,w)) return;
			
			int set_v = find_set(v);
			int set_w = find_set(w);
			
			parents[set_w] = set_v;
		}
	
};

void inic(){
	for(int v = 0; v < MAX; v++){
		graph[v].clear();
	}
}

int main (){
	inic();
	
	int N, M;
	cin >> N >> M;
	
	UnionFind uf(N);
	
	// Populating Graph:
	for (int i = 1; i <= M; i++){
		int v, w, custo;
		cin >> v >> w >> custo;
		
		graph[v].push_back(ii(custo,w));
		graph[w].push_back(ii(custo,v));
	}
	
	return 0;
}