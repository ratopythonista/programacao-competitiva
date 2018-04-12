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
int v[1005], n, m;

bool can(int c){
	int atual = 0, qtd = 1;
	fori(i, 0, n){
		if(v[i] > c) return false;
		if(atual + v[i] > c){
			atual = 0;
			qtd++;
		}
		if(qtd > m) return false;
		atual += v[i];	
	}return qtd;
}

int main(){	
	
	while(scanf("%d %d", &n, &m) == 2){
		int lo = -1, hi = 0;
		fori(i, 0, n){ scanf("%d", &v[i]); hi+=v[i]; lo = min(lo, v[i]);}
		int ans = 100000000;
		while(lo < hi){
			int mid = (lo+hi)/2;
			if(can(mid)) hi = mid;
			else lo = mid+1;		
		}printf("%d\n", lo);	
	}
	
	return 0;
}
