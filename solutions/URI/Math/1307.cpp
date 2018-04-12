#include<bits/stdc++.h>
using namespace std;
int pot2[32];

void preenche(){
	for(int i=0; i<32; i++){
		pot2[i] = 1<<i;		
	}
}

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

int main(){
	char S1[40], S2[40];
	int ct;
	scanf("%d", &ct);
	preenche();
	
	for(int i=1; i<=ct; i++){
		scanf("%s", S1);
		scanf("%s", S2);
		int v1=0, v2=0;
		
		int pot = 0;
		for(int j=strlen(S1)-1; j>=0; j--, pot++){
			if(S1[j]=='1') v1+=pot2[pot];
		}		
		pot = 0;
		for(int j=strlen(S2)-1; j>=0; j--, pot++){
			if(S2[j]=='1') v2+=pot2[pot];
		}		
		if(gcd(v1, v2)!=1) printf("Pair #%d: All you need is love!\n", i);
		else printf("Pair #%d: Love is not all you need!\n", i);	
	}	

	return 0;
}
