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
		map<char, int> size;
		map<char, char> parent;
		char *s;
		int n;
		
		UnionFind(char *s, int n){
			this->s = s;
			this->n = n;
			fori(i, 0, n){
				size[s[i]] = 1;
				parent[s[i]] = s[i];
				i++;			
			}
		}
		
		char find(char u){
			if(parent[u] == u) return u;
			else return parent[u] =  find(parent[u]);	
		}
		
		void join(char a, char b){
			if(find(a) == find(b)) return ;
			a = find(a);
			b = find(b);
			
			if(size[a] < size[b]) swap(a, b);
			
			parent[b] = a;
			size[a] += size[b];		
		}
		
		ii count(){
			ii ans;
			ans.ff = ans.ss = 0;
			fori(i, 0, n){
				if(parent[s[i]] == s[i]){
					if(size[s[i]] == 1) ans.ff++;
					else ans.ss++;				
				}		
				i++;	
			}	
			return ans;
		}
};

int main(){
	int tc;
	
	scanf("%d",&tc);
	
	while(tc--){
		char s[100], a[50], b[50];
		int pos = 0;;
		
		while(scanf("%s", s) && s[0] != '*'){
			a[pos] = s[1];
			b[pos] = s[3];
			pos++;		
		}
		scanf("%s", s);
		
		UnionFind uf(s, strlen(s));
		fori(i, 0, pos){
			uf.join(a[i], b[i]);			
		}
		
		ii ans = uf.count();
		
		printf("There are %d tree(s) and %d acorn(s).\n", ans.ss, ans.ff);
	
	}
	
	return 0;
}
