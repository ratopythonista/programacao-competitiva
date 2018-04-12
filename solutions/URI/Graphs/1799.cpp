#include<bits/stdc++.h>		
using namespace std;									
#define ff first                  								     
#define ss second
#define mp make_pair
#define pb push_back 
#define fori(a, l, f) for(int a = l; a<f; ++a)
#define ford(a, l, f) for(int a=l; a>=f; --a)
#define pq priority_queue 
#define checkBit(mask, i) ((mask & (1 << i)) != 0) ? true:false
#define setBit(mask, i) mask = mask | (1 << i)
#define debug(x) cout<<x<<endl
#define fill(x, y) memset(x, y, sizeof x)

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;

map<string, vector<string> > graph;
int v, e;

int bfs(string source, string dest){
	queue<string> fila;
	fila.push(source);		
	map<string, int> visitado, dist;
	visitado[source] = 1;
	dist[source] = 0;
	
	while(!fila.empty()){
		string u = fila.front();
		fila.pop();
		for(auto v: graph[u]){
			if(visitado[v] == 0){				
				visitado[v] = 1;
				fila.push(v);
				dist[v] = dist[u]+1;			
			}
		}		
	}
	return dist[dest];
}

int main(){
	ios_base::sync_with_stdio(false);

	cin>>v>>e;
	
	fori(i, 0, e){
		string s1, s2;
		cin>>s1>>s2;
		graph[s1].pb(s2);
		graph[s2].pb(s1);	
	}
	cout<<(bfs("Entrada", "*") + bfs("*", "Saida"))<<endl;	
	
	return 0;
}
