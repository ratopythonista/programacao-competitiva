#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int pilha[3][MAX], memo[MAX][MAX][MAX], n;

int solve(int a, int b, int c){
	int posA, posB, posC, sum;
	bool f;
		
	if(a==n && b==n && c==n) return 1;
	if(memo[a][b][c] != -1) return memo[a][b][c];
	
	for(int i=1; i<8; i++){
		f = false;
		posA = a, posB = b, posC = c, sum = 0;
		
		if((i & 1)!=0 && posA<n) sum += pilha[0][posA++], f = true;
		if((i & 2)!=0 && posB<n) sum += pilha[1][posB++], f = true;
		if((i & 4)!=0 && posC<n) sum += pilha[2][posC++], f = true;
		
		if(f && sum%3==0){		
			int s = solve(posA, posB, posC);
			if(s==1) return 1;
			else memo[posA][posB][posC] = 0;
		} 			
	}	
	
	return memo[a][b][c] = 0; 	
}

int main(){
		
	while(scanf("%d", &n) && n!=0){
		
		memset(memo, -1, sizeof(memo));
		
		for(int i=0; i<n; i++)
			scanf("%d %d %d", &pilha[0][i], &pilha[1][i], &pilha[2][i]);		
				
		printf("%d\n", solve(0, 0, 0));	
	}			

	return 0;
}
