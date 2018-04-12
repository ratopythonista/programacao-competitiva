#include<bits/stdc++.h>
using namespace std;

int main(){
	int j, r, pontuacao[550];

	scanf("%d %d", &j, &r);
	
	memset(pontuacao, 0, sizeof(pontuacao));		
		
	for(int i=0; i<j*r; i++){
		int a;
		scanf("%d", &a);
		pontuacao[i%j] += a;
	}
	
	int max = 0;
	
	for(int i=0; i<j; i++){
		if(pontuacao[i] >=pontuacao[max]){
			max = i;	
		}else if(pontuacao[i] == pontuacao[max]){
			max = pontuacao[i]%j > pontuacao[max]%j?i:max;			
		}		
	}
	
	printf("%d\n", max+1);

return 0;
}
