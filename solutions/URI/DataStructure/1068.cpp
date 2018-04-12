#include<bits/stdc++.h>
using namespace std;

int main(){
	char exp[1010];	
	
	while(scanf("%s", exp)==1){
		stack<char> pilha;
		bool flag = true;
		for(int i=0; i<strlen(exp); i++){
			if(exp[i]=='(') pilha.push('(');
			if(exp[i]==')'){
				if(pilha.empty()){
					flag = false; 
					break;
				}else pilha.pop();
			}									
		}
		if(!pilha.empty()) flag = false;
		printf(flag?"correct\n":"incorrect\n");	
	}
	

	return 0;
}
