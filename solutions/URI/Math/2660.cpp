#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b){
	return b?gcd(b, a%b):a;
}


int main(){
	int n, l, vetor[10010];
		
	scanf("%d %d", &n, &l);
	for(int i=0; i<n; i++) scanf("%d", &vetor[i]);
	int ans = 1;	
	for(int i=0; i<n; i++) ans = (ans/gcd(ans, vetor[i]))*vetor[i];
		
	long long int maior  = ans;
	long long int melhor = 1;
	for(int i=1; i<=l; i++){
		long long int aux = (ans/gcd(ans, i))*i; 
		if((aux > maior) && (aux<=l)){
			maior  = aux;
			melhor = i;			
		}	
	}
	printf("%lld\n", melhor);
	
return 0;
}
