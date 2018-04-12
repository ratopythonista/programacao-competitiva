#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

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
	int tc, k, m;
	ll value[500];
	
	char s[10005];
	
	scanf("%d", &tc);
	while(tc--){
	
		memset(value, 0, sizeof value);
		scanf("%d ", &k);		
		while(k--){
			char a;
			ll b;
			scanf("%c %lld ", &a, &b);		
			value[int(a)+200] = b;							
		}
	
		scanf("%d ", &m);		
		ll ans = 0;
		while(m--){
			fgets(s, 10004, stdin);			
			int sz = strlen(s);			
			fori(i, 0, sz) ans += value[int(s[i])+200];	
		}
		printf("%lld.", ans/100);
		if(ans%100 < 10) printf("0");
		printf("%lld$\n", ans%100);				
	}
	
	return 0;
}
