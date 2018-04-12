// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 10
#define oo 0x3F3F3F3F
using namespace std;
using ii = pair <int,int>;
using iii = tuple<int,int,int>;

char grid[MAX][MAX];
int dist[MAX][MAX];
ii moviments[4] = {{0,1},{0,-1},{1,0},{-1,0}};

void dijkstra(int source_row, int source_col){
	priority_queue<iii,vector<iii>, greater<iii>> pq;
	pq.push(iii(0, source_row, source_col));
	dist[source_row][source_col] = 0;
	
	while (not pq.empty()){
		int v_dist, v_row, v_col;
		tie(v_dist, v_row, v_col) = pq.top(); pq.pop();
		
		if (dist[v_row][v_col] < v_dist) continue;
		
		for (auto &mov : moviments){
			int w_row = v_row + mov.first;
			int w_col = v_col + mov.second;
			
			if (grid[w_row][w_col] != '#'){
				int w_dist;
				
				// Each problem has its own w_dist, just an example:
				if (grid[w_row][w_col] == '.'){
					w_dist = v_dist + 1;
				}else if (grid[w_row][w_col] == '@'){
					w_dist = v_dist + 5;
				}else if (grid[w_row][w_col] == '$'){
					w_dist = v_dist + 20;
				}
				
				// Cheaper path:
				if(w_dist < dist[w_row][w_col]){
					pq.push(iii(w_dist, w_row, w_col));
					dist[w_row][w_col] = w_dist;
				}
			}
		}
	}
}

void inic(){
	for (int i = 0; i < MAX; i++){
		for (int j = 0; j < MAX; j++){
			grid[i][j] = '#';
			dist[i][j] = oo;
		}
	}
}

int main(){
	inic ();
	int N ;
	
	cin >> N;
	
	// Populating GRID:
	for(int row = 1; row <= N; row++){
		for (int col = 1; col <= N; col++){
			cin >> grid[row][col];
		}
	}
	
	// Dijkstra:
	dijkstra(1,1);
		
	return 0;
}