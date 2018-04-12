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
string s1[100005], s2[100005];
set<string> s;

class UnionFind{
	public:
		map<string, int> sz;
		map<string, string> parent;
		
		UnionFind(){
			for(auto i: s){
				parent[i] = i;
				sz[i] = 1;
			}
		}
		
		string find(string& u){
			if(parent[u] == u) return u;
			else return parent[u] = find(parent[u]);			
		}
		
		void join(string& s_1, string& s_2){
			if(find(s_1) == find(s_2)) return ;
			s_1 = find(s_1);
			s_2 = find(s_2);
			
			if(sz[s_1] < sz[s_2]) swap(s_1, s_2);
			
			parent[s_2] = s_1;
			sz[s_1] += sz[s_2];					
		}
};

int main(){
	int tc;
	ios_base::sync_with_stdio(false);	
	
	cin>>tc;	
	while(tc--)	{
		int n;
		cin>>n;
		s.clear();
		fori(i, 0, n){		
			string a, b;			
			cin>>a>>b;
			s1[i] = a;
			s2[i] = b;
			s.insert(a);
			s.insert(b);	
		}
	
		UnionFind uf;
		fori(i, 0, n){
			uf.join(s1[i], s2[i]);
			cout<<(uf.sz[uf.find(s1[i])])<<endl;	
		}
	}

	return 0;
}


