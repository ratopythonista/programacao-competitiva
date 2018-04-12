#include<bits/stdc++.h>
#define MAX 1000100
using namespace std;
typedef long long ll;

ll crivo[MAX];

void sieve(){
	memset(crivo, 0, sizeof(crivo));	
	for(int i=1; i<MAX; i++)
		for(int j=i; j<MAX; j+=i) crivo[j]+=i;			
	for(int i=i; i<MAX; i++) crivo[i] += crivo[i-1];
}



int main(){
	int n;
	sieve();
	while(scanf("%d", &n) && n!=0){
		printf("%lld\n", crivo[n]);
	}


return 0;
}
