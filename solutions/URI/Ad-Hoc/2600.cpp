#include<bits/stdc++.h>
using namespace std;

int main(){
	int dado[6], n;
	
	scanf("%d", &n);
	
	while(n--){
		bool flag=false;
		for(int i=0; i<6; i++){
			scanf("%d", &dado[i]);			
		}
	
		if(dado[0]+dado[5]==7 && dado[1]+dado[3]==7 && dado[2]+dado[4]==7){
			sort(dado, dado+6);
			flag = true;
			for(int i=0; i<5; i++){
				if(dado[i]==dado[i+1] || (dado[i]<1 || dado[i]>6)){
					flag = false;				
					break;
				}
			}	
		}	
		printf(flag?"SIM\n":"NAO\n");
	}
	
	
	


	return 0;
}
