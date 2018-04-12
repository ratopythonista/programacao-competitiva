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
#define MAX 1000005

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////
int p[30], dp[MAX];

int main(){
	
	int tc;
	
	scanf("%d", &tc);	
	while(tc--){
		int n, m;
		scanf("%d %d", &n, &m);
		fill(dp, 0);
		
		fori(i, 0, n) scanf("%d", &p[i]);
		
		fori(i, 1, m+1){
			int q = 1<<25;			
			fori(j, 0, n){
				if(i - p[j] >= 0 && ((dp[i - p[j]] + 1) < q)){
					q = dp[i - p[j]] + 1;
				}				
			}		
			dp[i] = q;
		}
		
		printf("%d\n", dp[m]);
	}
	
	return 0;
}
