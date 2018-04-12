#include<bits/stdc++.h>
using namespace std;

int vetor[10050];

int main(){
	int i=0, n=0;
	while(scanf("%d", &vetor[i++])==1)n++;
	
	for(int i=0; i<n; i++){
		if(vetor[i]>vetor[i+1]){
			printf("%d\n", ++vetor[i]);
			break;
		}
	}

return 0;
}
