#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) && n!=0){
		queue<int> fila, remain;
		for(int i=1; i<=n; i++) fila.push(i);
		
		while(fila.size()>1){
			remain.push(fila.front());
			fila.pop();
			fila.push(fila.front());
			fila.pop();	
		}
		printf("Discarded cards:");
		while(!remain.empty()){
			printf(" %d", remain.front());
			remain.pop();
			if(remain.size()!=0) printf(",");
		}printf("\n");
		printf("Remaining card: %d\n", fila.front());	
	}	

	return 0;
}
