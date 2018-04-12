#include<bits/stdc++.h>
using namespace std;

int main(){
	int p, n, vetor[305];
	
	scanf("%d %d", &p, &n);
	
	bool flag = false;
	memset(vetor, -1, sizeof(vetor));
	for(int i=0; i<n; i++){
		int u;
		scanf("%d", &u);
		
		if(vetor[u%p]==-1) vetor[u%p] = u;
		else{
			flag = true;
			printf("%d\n", i+1);
			break;
		} 
	}if(!flag) printf("-1\n");		
	
	
	
	return 0;
}
