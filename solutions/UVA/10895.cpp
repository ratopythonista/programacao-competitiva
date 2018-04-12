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

int main(){
	int n, m;
	
	while(scanf("%d %d", &n, &m) == 2){
		vii ans[10005];
		
		fori(i, 0, n){
			int r;
			vi v;
			
			scanf("%d", &r);
			fori(j, 0, r){	
				int u;
				scanf("%d", &u);
				v.pb(u);
			}
			fori(j, 0, r){
				int u;
				scanf("%d", &u);
				ans[v[j]].pb(mp(1+i, u));					
			}		
		}
		
		printf("%d %d\n", m, n);
		
		fori(i, 1, m+1){
			printf("%lu", ans[i].size());
			if(ans[i].size() == 0) printf("\n\n");
			else {
				printf(" ");	
						
				bool first = true;
				for(auto j: ans[i]){
					if(!first) printf(" ");
					first = false;
					printf("%d", j.ff);
				}printf("\n");
				
				first = true;
				for(auto j: ans[i]){
					if(!first) printf(" ");
					first = false;
					printf("%d", j.ss);
				}printf("\n");	
			}	
		}	
	}
		
	return 0;
}
