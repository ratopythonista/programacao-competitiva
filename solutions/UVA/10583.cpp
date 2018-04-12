#include<bits/stdc++.h>
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

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////

class UnionFind{
	public:
		vector<int> parent, rank;
		int qtd, sz;
		
		UnionFind(int sz){
			this->qtd = this->sz = sz;
			parent.resize(sz+1);
			rank.resize(sz+1);			
			
			fori(i, 1, sz+1){
				parent[i] = i;
				rank[i] = 1;		
			}		
		}
		
		int find(int u){
			if(u == parent[u]) return u;
			else return parent[u] = find(parent[u]);			
		}
		
		void join(int u, int v){
			if(find(u) == find(v)) return ;
			
			u = find(u);
			v = find(v);
			
			if(rank[u]<rank[v]) swap(u, v);			
			
			parent[v] = u;
			if(rank[u] == rank[v]) rank[u]++;	
			qtd--;	
		}
};

int main(){
	
	int n, m, tc = 1;
	
	while(scanf("%d %d", &n, &m) && n|m){
		UnionFind uf(n);
		
		while(m--){
			int u, v;
			scanf("%d %d", &u, &v);
			uf.join(u, v);		
		}	
		
		printf("Case %d: %d\n",tc++, uf.qtd);	
	}	
		
	return 0;
}
