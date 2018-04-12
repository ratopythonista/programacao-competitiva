#include<bits/stdc++.h>
#define MAX 1000100

using namespace std;

int vetor[MAX];
int freq[MAX];

void sieve(){
	memset(freq, 0, sizeof(freq));
	for(int i=1; i<MAX; i++)
		for(int j=i; j<MAX; j+=i) vetor[j]++;
	for(int i=2; i<MAX-50; i++){
		if(vetor[i]==2 && (vetor[i+2]==2 || vetor[i-2]==2)) freq[i]++;		
		freq[i] += freq[i-1];	
	}
}
int main(){
	sieve();
	int q;
	scanf("%d", &q);	
	while(q>0){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a>b) swap(a, b);
		printf("%d\n", freq[b]-freq[a-1]);
	
	q--;
	}

return 0;
}
