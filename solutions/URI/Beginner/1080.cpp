#include<bits/stdc++.h>
using namespace std;

int main(){
	int pos = 1, maior, entrada;
	
	scanf("%d", &entrada);
	maior = entrada;
	
	
	for(int i=2; i<=100; i++){
		scanf("%d", &entrada);
		if(entrada > maior){
			pos = i;
			maior = entrada;
		}
	}
	
	printf("%d\n%d\n", maior, pos);
return 0;
}
