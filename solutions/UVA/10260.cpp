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
	char s[25], ans[25];
	map<char, int> mp;
	
	for(char i='A'; i<='Z'; i++) mp[i] = 0;
	mp['B'] = mp['F'] = mp['P'] = mp['V'] = 1;
	mp['C'] = mp['G'] = mp['J'] = mp['K'] = mp['Q'] = mp['S'] = mp['X'] = mp['Z'] = 2;	
	mp['D'] = mp['T'] = 3;
	mp['L'] = 4;
	mp['M'] = mp['N'] = 5;
	mp['R'] = 6;
		
	
	while(scanf("%s", s) == 1){
		int sz = strlen(s), pos = 0;
		
		fori(i, 0, sz){
			if(mp[s[i]] != 0){			
				int n = mp[s[i]];
				ans[pos++] = '0' + n;
				while(mp[s[i]] == n) i++;			
				i--;
			}		
		}ans[pos] = '\0';
		
		printf("%s\n", ans);	
	}
	
	return 0;
}
