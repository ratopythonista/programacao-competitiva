#include<bits/stdc++.h>
using namespace std;

int main(){
	char ans[][5] = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
	
	bool flag;
	vector<int> notas;
	int n, dist[] = {2, 2, 1, 2, 2, 2};
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		int u;
		scanf("%d", &u);
		notas.push_back(--u);		
	}
	int i;
	for(i=0; i<12; i++){
		set<int> tom;
		tom.insert(i);
		int ant = i;
		for(int k=1; k<7; k++){
			tom.insert((ant + dist[k-1])%12); 
			ant = (ant + dist[k-1])%12;		
		}		
	
		flag = true;
		for(int i=0; i<n; i++){
			set<int>::iterator it = tom.find(notas[i]%12);
			if(it==tom.end()){
				flag = false;
				break;
			}			
		}		
		if(flag) break;	
	}		
	
	if(flag) printf("%s\n", ans[i]);
	else printf("desafinado\n");
	
	
	
	return 0;
}
