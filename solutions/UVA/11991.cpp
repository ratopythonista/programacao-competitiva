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
vector<int> v[MAX];

int main(){	
	
	int n, m;
	
	while(scanf("%d %d", &n, &m) == 2){		
		fori(i, 0, MAX) v[i].clear();
		
		fori(i, 0, n){
			int u;
			scanf("%d", &u);			
			v[u].pb(i);	
		}
		while(m--){
			int a, b;
			scanf("%d %d", &a, &b);
			if(v[b].size() < a) printf("0\n");
			else printf("%d\n", v[b][a-1]+1);	
		}	
	}
	
	return 0;
}
