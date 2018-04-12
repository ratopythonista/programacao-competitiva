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
int n, v[100005];

bool can(int slt){
	fori(i, 1, n+1){
		if(v[i] - v[i-1] > slt) return false;
		if(v[i] - v[i-1] == slt) slt--;
	}return true;
}

int main(){
	int tc, t = 1;
	v[0] = 0;
	
	scanf("%d", &tc);
	while(tc--){
		scanf("%d", &n);	
		fori(i, 1, n+1) scanf("%d", &v[i]);
		int lo = v[1], hi = v[n];
		
		while(lo < hi){
			int mid = (lo+hi)/2;
			if(can(mid)) hi = mid;
			else lo = mid+1;				
		}
		printf("Case %d: %d\n", t++, lo);
	}		
	return 0;
}
