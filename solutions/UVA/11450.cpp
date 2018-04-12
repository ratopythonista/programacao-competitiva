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
#define oo 1<<25

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////
int m, c, shop[25][25], dp[205][25], sz[25]; //vestuario / preco

int solve(int money, int g){
	if(money < 0) return -oo;
	if(g == c) return m - money;
	if(dp[money][g] != -1) return dp[money][g];	
	
	int q = -oo;
	
	fori(i, 0, sz[g]){
		q = max(solve(money - shop[g][i], g+1), q);	
	}
	
	return dp[money][g] = q;
}

int main(){
	int tc;
	
	scanf("%d", &tc);
	while(tc--){
	
		fill(dp, -1);
		scanf("%d %d", &m, &c);
		fori(i, 0, c){			
			scanf("%d", &sz[i]);
			fori(j, 0, sz[i]) scanf("%d", &shop[i][j]);			
		}
		
		int q = solve(m, 0);
		if(q == -oo) printf("no solution\n");
		else printf("%d\n", q);		
	}
	
	return 0;
}
