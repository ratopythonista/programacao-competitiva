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
char s1[10005], s2[10005], ans[10005];
int sz;

bool can(int pos){
	stack<int> p;
	int pos_1 = 0, pos_2 = 0;	
	
	fori(i, 0, pos){
		if(ans[i] == 'i') p.push(s1[pos_1++]);		
		else{
			if(p.top() != s2[pos_2++]) return false;
			p.pop();
		}			
	}
	return true;
}

void solve(int qtd, int idx, int pos, int a, int b){
	if(idx == 2*sz){		
			bool first = true;
			fori(i, 0, 2*sz){
				if(!first) printf(" ");
				first = false;
				printf("%c", ans[i]);			
			}printf("\n");
		
		return ;
	}
	
	if(a < sz){
		ans[pos] = 'i';
		solve(qtd+1, idx+1, pos+1, a+1, b);
	}
	
	if(qtd>0 && b<sz && can(pos)){
		ans[pos] = 'o';
		solve(qtd-1, idx+1, pos+1, a, b+1);
	}
}

int main(){
	
	while(scanf("%s %s", s1, s2) == 2){
		
		sz = strlen(s1);
		if(sz != strlen(s2)) printf("[\n]\n");
		else{
			printf("[\n");
			solve(0, 0, 0, 0, 0);
			printf("]\n");		
		}	
	
	}	
	
	return 0;
}
