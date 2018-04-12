#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, ct;
	scanf("%d", &ct);
	
	while(ct--){
		scanf("%d %d", &a, &b);
		int lg = pow(10, floor(log10(a)));
		
		bool flag = true;
		while(a>=b){			
			if(a==b){
				printf("encaixa\n");
				flag = false;
				break;
			}else{
				a = a%lg;
				lg/=10;				
			}		
		}
		if(flag) printf("nao encaixa\n");	
	}	
return 0;
}
