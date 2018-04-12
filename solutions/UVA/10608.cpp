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

class UnionFind{
	public:
		int sz, parent[30005], size[30005];
		
		UnionFind(int sz){
			fori(i, 1, sz+1){
				parent[i] = i;
				size[i]   = 1;
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
			if(size[u] < size[v]) swap(u, v);
			parent[u] = v;
			size[v] += size[u];
		}
		
		int best(int sz){
			int ans = -1;
			fori(i, 1, sz+1) ans = max(ans, size[i]);	
			return ans;	
		}
};


int main(){
	int tc;	
	
	scanf("%d", &tc);
	
	while(tc--){
		int n, m;
		scanf("%d %d", &n, &m);
		UnionFind uf(n);
		while(m--){
			int u, v;
			scanf("%d %d", &u, &v);
			uf.join(u, v);
		}
		printf("%d\n", uf.best(n));
	}

	return 0;
}
