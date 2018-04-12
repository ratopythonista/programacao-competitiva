#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc, t = 1;
	ios_base::sync_with_stdio(false);
		
	cin>>tc;
	while(tc--){
		stack<string> pilha, mao, aux;
	
		for(int i=0; i<52; i++){
			string s;
			cin>>s;
			pilha.push(s);
		}	
		
		int y = 0;
		for(int i=0; i<25; i++){
			string s = pilha.top();
			pilha.pop();
			mao.push(s);		
		}
		
		for(int i=0; i<3; i++){
			string s = pilha.top();				
			pilha.pop();
			
			int value = (s.c_str()[0]>='2' && s.c_str()[0]<='9')?(s.c_str()[0] - '0'):10;			
			y += value;
			for(int j=0; j<(10-value); j++) pilha.pop();			
		}
		
		while(!mao.empty()){
			string s = mao.top();			
			mao.pop();
			pilha.push(s);
		}
		
		while(!pilha.empty()){
			string s = pilha.top();
			aux.push(s);
			pilha.pop();		
		}
		
		for(int i=0; i<(y-1); i++) aux.pop();
		cout<<"Case "<<(t++)<<": "<<aux.top()<<endl;
	}	
		
	return 0;
}
