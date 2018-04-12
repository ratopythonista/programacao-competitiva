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
	int k, v[20];	
	
	scanf("%d", &k);
	fori(i, 0, 12) scanf("%d", &v[i]);
	sort(v, v+12);
	
	int acc = 0, ans = 0, i = 11;		
	while(acc < k){
		acc += v[i--];
		ans++;
		if(i==-1) break;
	}
	
	if(acc >= k) printf("%d\n", ans);
	else printf("-1\n");

	return 0;
}
