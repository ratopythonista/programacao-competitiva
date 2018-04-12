#include<bits/stdc++.h>
#define MAX 10010
using namespace std;

int main(){
	int a, c, vetor[MAX];
	
	while(scanf("%d %d", &a, &c) && (a!=0 || c!=0)){
		for(int i=0; i<c; i++) scanf("%d", &vetor[i]);		
		int ans = a-vetor[0];
		
		for(int i=1; i<c; i++){
		
			if(a-vetor[i-1] < a-vetor[i]){
				ans += (vetor[i-1]-vetor[i]);			
			}	
					
		}printf("%d\n", ans);
	}

	return 0;
}
