#include<bits/stdc++.h>
using namespace std;

int main(){
	int vetor[3];
	for(int i=0; i<3; i++) scanf("%d", &vetor[i]);
	
	int ans = 100000;
	
	for(int i=0; i<3; i++){
		int f,aux=0;		
		for(int j=(i+1)%3; j!=i; j=(j+1)%3){
			f = j-i<0?(j-i)*(-1):(j-i);
			f= f*2;
			aux += f*vetor[j];			
		}
		ans = min(ans, aux);
	}
	printf("%d\n", ans);
	
	
	
	
	return 0;
}
