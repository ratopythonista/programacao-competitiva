#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, vetor[105], freq[1005];
	
	scanf("%d", &n);
	memset(freq, 0, sizeof freq);
	
	for(int i=0; i<n; i++){
		scanf("%d", &vetor[i]);
		freq[vetor[i]]++;	
	}
	
	bool flag = true;
	for(int i=0; i<=1000; i++){
		if((freq[i]+freq[i]-1) > n) flag = false;
	}
	
	printf(flag?"YES\n":"NO\n");	
	
	return 0;
}
