#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

bitset<MAX> proibido;
bitset<MAX> visitados;
int dist[MAX];

bool can(int u){	
	if(u<=0 || u>100000) return false;
	if(visitados[u]){
		
	
		return false;
	}
	if(proibido[u]) return false;
	return true;
}

int bfs(int source, int dest){
	visitados.reset();
	memset(dist, 0, sizeof dist);	
	queue<int> fila;
	fila.push(source);
	dist[source] = 0;
	visitados[source] = true;
	
	while(!fila.empty()){
		int u = fila.front(); fila.pop();
		if(u==dest) return dist[u];  		
		if(can(u*2)){fila.push(u*2);  dist[u*2] = dist[u]+1; visitados[u*2] = true;}
		if(can(u*3)){ fila.push(u*3); dist[u*3] = dist[u]+1; visitados[u*3] = true;}
		if(can(u-1)){ fila.push(u-1); dist[u-1] = dist[u]+1; visitados[u-1] = true;}
		if(can(u+1)){ fila.push(u+1); dist[u+1] = dist[u]+1; visitados[u+1] = true;}
		if(u%2==0 && can(u/2)){ fila.push(u/2);	dist[u/2] = dist[u]+1; visitados[u/2] = true; }
	}
	return -1;
}

int main(){
	int o, d, k, u;
	
	while(true){		
		scanf("%d %d %d", &o, &d, &k);
		if(o==0 && d==0 && k==0) break;
		proibido.reset();
		for(int i=0; i<k; i++){
			scanf("%d", &u);
			proibido[u] = true;
		}
		
		printf("%d\n", bfs(o, d));		
	}	
	
	return 0;
}
