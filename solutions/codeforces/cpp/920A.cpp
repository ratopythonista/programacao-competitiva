#include<bits/stdc++.h>
#define MAX 205

using namespace std;

int main(){	
	int ct;
	
	scanf("%d", &ct);
	
	while(ct--){
		int n, k;
		bool vetor[MAX];
		vector<int> dir, esq;
		
		memset(vetor, false, sizeof vetor);
		scanf("%d %d", &n, &k);
			
		for(int i=1; i<=k; i++){
			int pos;
			scanf("%d", &pos);
			vetor[pos] = true;
			esq.push_back(pos);
			dir.push_back(pos);		
		}	
		
		int t = 1;
		while(true){
			int qtd = 0;
			for(int i=1; i<=n; i++) if(vetor[i]) qtd++;
			if(qtd == n) break;						
			
			for(int& i: esq){
				if(i>=1) vetor[--i] = true;			
			}
			for(int& i: dir){
				if(i<=n) vetor[++i] = true;
			}			
			t++;
		}printf("%d\n", t);		
	
	}	
	
	return 0;
}
