#include<bits/stdc++.h>
using namespace std;

int main(){

	int vet1[5], vet2[5];
	for(int i=0; i<5; i++) scanf("%d", &vet1[i]);
	for(int i=0; i<5; i++) scanf("%d", &vet2[i]);
	bool flag = true;
	
	for(int i=0; i<5; i++)
		if(!(vet1[i]^vet2[i])) flag = false;	
	printf(flag?"Y\n":"N\n");		
	
	

	return 0;
}
