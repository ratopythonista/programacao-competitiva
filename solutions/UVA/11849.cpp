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
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	int n, m;
	
	while(scanf("%d %d", &n, &m) && (n!=0 || m!=0)){
		set<int> s;
		
		fori(i, 0, n){
			int u;
			scanf("%d", &u);
			s.insert(u);
		}
		
		int ans = 0;
		fori(i, 0, m){
			int u;
			scanf("%d", &u);
			auto it = s.find(u);
			
			if(it != s.end()) ans++;
		}
		printf("%d\n", ans);
	
	}
	
	return 0;
}
