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


int main(){
	int n, q, tc = 1;
	vector<int> v;
	
	while(scanf("%d %d", &n, &q)){
		if(n==0 && q==0) break;
		
		v.resize(n);		
		fori(i, 0, n) scanf("%d", &v[i]);
		sort(v.begin(), v.end());
		printf("CASE# %d:\n", tc++);
		
		while(q--){
			int u;
			scanf("%d", &u);
			vector<int>::iterator it = lower_bound(v.begin(), v.end(), u);			
			if(it == v.end() || *it != u) printf("%d not found\n", u);
			else printf("%d found at %d\n", u, int(distance(v.begin(), it)) + 1);		
		}	
	}	
	
	return 0;
}
