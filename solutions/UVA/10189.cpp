#include<bits/stdc++.h>
using namespace std;

pair<int, int> mov[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {-1, -1}, {1, 1}, {1, -1}, {-1, 1}};

int main(){
	int n, m, tc = 1;
	bool first = true;
	
	
	while(scanf("%d %d", &n, &m)){
		char grid[105][105];
		
		if(n == 0 && m == 0) break;
		if(!first) printf("\n");
		first = false;	
		
		printf("Field #%d:\n", tc++);
		
		for(int i=0;i<n; i++){
			scanf("%s", grid[i]);
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(grid[i][j] == '*') printf("*");
				else{
					int acc = 0;
					
					for(auto p: mov){
						int x = i + p.first;
						int y = j + p.second;						
						if(x>=0 && x<n && y>=0 && y<m && grid[x][y] == '*') acc++;	
					}
					printf("%d", acc);					
				}
			}printf("\n");		
		}	
	}

	return 0;
}
