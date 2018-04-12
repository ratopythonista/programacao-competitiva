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
#define MAX 505

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;

int main(){
	int n, m, q;
	
	while(scanf("%d %d", &n, &m)){
		if(n == 0 && m == 0) break;
		vector<vector<int>> v;
				
		fori(i, 0, n){
			vector<int> aux;
			fori(j, 0, m){
				int u;
				scanf("%d", &u);
				aux.pb(u);
			}
			v.pb(aux);		
		}
		
		scanf("%d", &q);
		while(q--){
			int l, u, ans = -1;
			scanf("%d %d", &l, &u);
			
			fori(i, 0, n){
				vector<int>::iterator it = lower_bound(v[i].begin(), v[i].end(), l);
				int pos = int(distance(v[i].begin(), it)), value = 0;
				int x = i, y = pos;				
				
				while(x < n && y < m){
					if(v[x][y] > u) break;				
					value++;
					x++;
					y++;				
				}				
				ans = max(ans, value);
			}
			printf("%d\n", ans);
		}printf("-\n");
	}
		
	return 0;
}
