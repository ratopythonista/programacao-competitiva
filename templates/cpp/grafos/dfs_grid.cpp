// Created by Vinicius Nobre

#include <bits/stdc++.h>
#define MAX 10
using namespace std;
using ii=pair<int,int>;

char grid[MAX][MAX];
bool visited[MAX][MAX];
ii moviments[4] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int v_row, int v_col){
	visited[v_row][v_col] = true;
	
	for (auto &mov: moviments){
		int w_row = v_row + mov.first;
		int w_col = v_col + mov.second;
		
		if (not visited[w_row][w_col] and grid[w_row][w_col] != '#'){
			dfs(w_row, w_col);
		}
	}
}

void inic(){
	for (int i = 0; i < MAX; i++){
		for (int j = 0; j < MAX; j++){
			grid[i][j] = '#';
			visited[i][j] = false;
		}
	}
}

int main (){
	inic();
	
	int N;
	cin >> N;
	
	// Populating GRID:
	for (int row = 1; row <= N; row++){
		for(int col = 1; col <= N; col++){
			cin >> grid[row][col];
		}
	}
	
	// DFS:
	dfs(1,1);
	
	return 0;
}