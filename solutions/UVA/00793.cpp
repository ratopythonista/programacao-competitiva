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
#define MAX 1000005
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;

class UnionFind{
	public:
		vi parent, rank;
		
		UnionFind(int n){
			parent.resize(n+1);
			rank.resize(n+1);
			
			fori(i, 1, n+1){
				parent[i] = i;
				rank[i]   = 1;
			}		
		};
		
		int find(int u){
			if(parent[u] == u) return u;
			else return parent[u] = find(parent[u]);
		}
		
		void join(int u, int v){
			if(find(u) == find(v)) return ;
			
			u = find(u);
			v = find(v);
			
			if(rank[u]<rank[v]) swap(u, v);
			parent[v] = u;
			if(rank[u] == rank[v]) rank[u]++;					
		}
};

int main(){	
	int tc;
	
	scanf("%d", &tc);
	bool first = true;
	
	while(tc--){
		int n, u, v, a = 0, b = 0;
		char c, aux;		
		
		scanf("%d ", &n);
		UnionFind uf(n);
		
		while(scanf("%c", &c)==1 && c!='\n'){
			scanf("%d %d", &u, &v);
			scanf("%c", &aux);			
			
			if(c == 'c') uf.join(u, v);
			else{
				if(uf.find(u) == uf.find(v)) a++;
				else b++;
			} 		
		}
		
		if(!first) printf("\n");
		first = false;
		
		printf("%d,%d\n", a, b);	
	}
	
	return 0;
}
