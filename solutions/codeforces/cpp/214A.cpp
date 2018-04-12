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
	int n, ans = 0, m, a=0, b=0;
	
	scanf("%d %d", &n, &m);
	
	fori(a, 0, max(m, n)+1)
		fori(b, 0, max(m, n)+1)
			if(a*a+b == n && a+b*b==m) ans++;		
	
	printf("%d\n", ans);


	return 0;
}
