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
	
	while(true){
		multiset<pair<pair<int, int>, int>> conjunto;
		int n, m;
		
		scanf("%d %d", &n, &m);
		if(n==0 && m==0) break;
	
		while(n--){
			int a, b;
			scanf("%d %d", &a, &b);
			conjunto.insert(mp(mp(a, b), 0));	
		}
	
		while(m--){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);		
			conjunto.insert(mp(mp(a, b), c));				
		}
		
		bool flag = true;
		int atual = 0;
		auto   it = conjunto.begin();
	
		while(!conjunto.empty()){
			if(it->first.first < atual){				
				flag = false;
				break;		
			}			
			atual = it->first.second;
			if(it->second != 0 && it->first.first+it->second<=1000000) 
				conjunto.insert(mp(mp(it->first.first+it->second, it->first.second+it->second), it->second));
			
			it++;	
			conjunto.erase(conjunto.begin());			
		}
		printf(flag?"NO CONFLICT\n":"CONFLICT\n");
	
	}
	
	return 0;
}
