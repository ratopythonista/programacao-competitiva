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
	int tc = 1, n;
	ll m[105][105];	
	
	scanf("%d ", &n);
	
	while(n--){
		int sz;
		scanf("N = %d ", &sz);
		
		bool flag = true;
		
		fori(i, 0, sz){
			fori(j, 0, sz){
				scanf("%lld ", &m[i][j]);				
				if(m[i][j]<0) flag = false;			
			}
		}
		
		vector<ll> crs, drs;
		
		if(flag){
			fori(i, 0, sz){
				fori(j, 0, sz){
					if(i<=j) crs.pb(m[i][j]);
				}			
			}
			ford(i, sz-1, 0){
				ford(j, sz-1, 0){
					if(i>=j) drs.pb(m[i][j]);					
				}
			}		
		}
				
		if(!flag) printf("Test #%d: Non-symmetric.\n", tc++);
		else{
			printf("Test #%d: ", tc++);
			printf(crs==drs?"Symmetric.\n":"Non-symmetric.\n");		
		}	
	}				
	return 0;
}
