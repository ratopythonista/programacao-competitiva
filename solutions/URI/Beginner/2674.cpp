#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
	if(num<2) return false;
	for(int i=2; i*i<=num; i++){
		if(num%i==0) return false;
	}
	return true;
}
void decompoe(int n){
	while(n>0){
		int resto = n%10;
		if(!isPrime(resto)){
			printf("Primo\n");
			return ;
		}
		n = n/10;
	}	
	printf("Super\n");


}





int main(){
	int n;
	while(scanf("%d", &n)==1){
		if(!isPrime(n)) printf("Nada\n");
		else{
			decompoe(n);
		}		
	}

return 0;
}
