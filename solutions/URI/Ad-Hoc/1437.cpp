//1:43
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char comandos[1050];
	
	while(true){
		int quant = 0;
		scanf("%d", &n);
		if(n==0) break;
		scanf("%s", comandos);
		
		for(int i=0; i<n; i++){
			if(comandos[i]=='D') quant++;
			else quant--;		
		}
		
		if(quant<0){
			while(quant<0) quant+=4;		
		}
		
		if(quant%4==0) printf("N\n");
		if(quant%4==1) printf("L\n");
		if(quant%4==2) printf("S\n");
		if(quant%4==3) printf("O\n");
		
		
		
		
		
	
	}



return 0;
}
