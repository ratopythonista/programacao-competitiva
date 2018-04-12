#include<cstdio>
#include<stdio.h>
#include<vector>
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
#define MAX 10005

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;

int n, m, q;

class UnionFind{
	public:
		int sz, parent[MAX], rank[MAX];
		
		UnionFind(int sz){
			this->sz = sz;
			fori(i, 1, sz+1){
				rank[i] = 0;
				parent[i] = i;
			}		
		}
		
		int find(int i){
			return parent[i] = (i==parent[i]?i:find(parent[i]));
		}
		
		bool sameSet(int i, int j){
			return find(i) == find(j);
		}
		
		void join(int i, int j){
			if(sameSet(i, j)) return ;
			i = find(i);
			j = find(j);
			if(rank[i] < rank[j]) swap(i, j);			
			parent[j] = i;			
			if(rank[i] == rank[j]) rank[j]++;
		}		
};

int main(){
	
	bool first = true;
	
	while(scanf("%d %d %d", &n, &m, &q) == 3){
		if(!first) printf("\n");
		else first = false;
		UnionFind uf(n);
		
		int x, y;
		while(m--){
			scanf("%d %d", &x, &y);
			uf.join(x, y);
		}
		
		while(q--){
			scanf("%d %d", &x, &y);
			printf(uf.sameSet(x, y)?"S\n":"N\n");
		}		
	}
	
	return 0;
}
