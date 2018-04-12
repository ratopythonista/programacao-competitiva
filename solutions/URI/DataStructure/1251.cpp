#include<bits/stdc++.h>
using namespace std;


char texto[1050];
int  frequencia[150];



void contaChar(){
	vector<int> quant[1050];
	sort(texto, texto+strlen(texto), greater<char>());
	int freq=1;	
	for(int i=0; i<strlen(texto);i++){		
		if(texto[i+1]==texto[i])freq++;	
			
		else{
			quant[freq].push_back(texto[i]);
			freq=1;
		}	
	}
	for(int i=0; i<1050; i++){
		if(not quant[i].empty()){
			for(int v: quant[i]){
				printf("%d %d\n", v, i);
			}
		}
	}
}



int main(){
	bool flag = false;
	while(scanf("%s", texto)==1){
		if(flag)printf("\n");
		contaChar();	
		flag = true;
			
	}	
return 0;

}
