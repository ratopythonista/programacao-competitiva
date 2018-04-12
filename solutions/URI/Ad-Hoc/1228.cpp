#include<bits/stdc++.h>
using namespace std;

int n;
int partida[30];
int chegada[30];
int quant = 0;

int findPos(int pos){
	for(int i=0; i<=24; i++){
		if(partida[i]==pos) return i;
	}
}

int main(){
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) scanf("%d", &partida[i]);
	for(int i=0; i<n; i++) scanf("%d", &chegada[i]);	
	
	for(int i=n-1; i>=0; i--){
		if(chegada[i]!=partida[i]){
			int j = findPos(chegada[i]);
			while(partida[i]!=chegada[i]){
				swap(partida[j], partida[j+1]);
				j++;
				quant++;		
			}
		}
	}
	printf("%d\n", quant);
return 0;
}
