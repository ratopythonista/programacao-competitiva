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
	deque<char> lista;
	char s[100005];
	
	while(scanf("%s", s) == 1){
		lista.clear();
	
		int sz = strlen(s);			
		bool fim = true;
		deque<char>::iterator it;
		
		fori(i, 0, sz){
			if(s[i] == '['){fim = false; it = lista.begin(); continue;}
			else if(s[i] == ']'){ fim = true; continue;}			
			else{
				if(fim) lista.pb(s[i]);
				else {it = lista.insert(it, s[i]); it++;}	
			}
		}
	
		for(auto i: lista) printf("%c", i);
		printf("\n");
	}
		
	return 0;
}

