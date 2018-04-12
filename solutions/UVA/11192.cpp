#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	
	while(scanf("%d", &n) && n!=0){
		char s[105];
		stack<char> p;
		
		scanf("%s", s);
		int sz = strlen(s);
		n = (sz)/n;
		int i = 0;
		
		while(i<sz){
			for(int j=0; j<n; j++, i++){
				p.push(s[i]);		
			}
			while(!p.empty()){
				char c = p.top();
				printf("%c", c);
				p.pop();
			}	
		}printf("\n");
	
	}
	
	return 0;
}
