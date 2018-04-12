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
	char s[105], m = 0, M = 0;
	
	scanf("%s", s);
	int sz = strlen(s);
	
	fori(i, 0, sz){
		if(s[i]>='a' && s[i]<='z') m++;
		else M++;		
	}
	
	if(m >= M) fori(i, 0, sz) printf("%c", (s[i]>='a' && s[i]<='z')?s[i]:'a'+(s[i]-'A'));
	else fori(i, 0, sz) printf("%c", s[i]>='A' && s[i]<='Z'?s[i]:'A'+(s[i]-'a'));
	printf("\n");
	return 0;
}





