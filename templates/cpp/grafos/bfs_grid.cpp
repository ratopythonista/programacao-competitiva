// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 10
using namespace std;
using ii = pair<int,int>;

char grid[MAX][MAX];
int dist[MAX][MAX];
ii moviments[4] = {{0,1},{0,-1},{1,0},{-1,0}};

void bfs(int source_row, int source_col){
	queue<ii> q;
	dist[source_row][source_col] = 0;
	q.push(ii(source_row, source_col));
	
	while (not q.empty()){
		int v_row, v_col;
		tie(v_row, v_col) = q.front(); q.pop();
		
		for (auto &mov: moviments){
			int w_row = v_row + mov.first;
			int w_col = v_col + mov.second;
			
			if (grid[w_row][w_col] != '#' and dist[w_row][w_col] == -1){
				q.push(ii(w_row, w_col));
				dist[w_row][w_col] = dist[v_row][v_col] + 1;
			}
		}
	}
	
}

void inic(){
	for (int i = 0; i < MAX; i++){
		for(int j = 0; j < MAX; j++){
			grid[i][j] = '#';
			dist[i][j] = -1;
		} 
	}
}

int main (){
	inic();
	
	int N;
	cin >> N;
	
	// Populating GRID:
	for (int row = 1; row <= N; row++){
		for (int col = 1; col <= N; col++){
			cin >> grid[row][col];
		}
	}

	// BFS:
	bfs(1,1);

	return 0;
}