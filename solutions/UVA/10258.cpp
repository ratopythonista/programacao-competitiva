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
#define MAX 105

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////

class Contestant{
	public:
	int qtd, penalty, team;
	
	Contestant(int qtd, int pen, int t){
		this->qtd     = qtd;
		this->penalty = pen;
		this->team    = t;
	}
	
};

bool operator < (Contestant a, Contestant b){
	if(a.qtd < b.qtd) return true;
	if(a.qtd > b.qtd) return false;
	
	if(a.penalty > b.penalty) return true;
	if(a.penalty < b.penalty) return false;
	
	return a.team > b.team;
}

int main(){
	int tc;
	int qtd[MAX], penalty[MAX][15];
	bool done[MAX][15], made[MAX], first = true;		
	
	scanf("%d", &tc);
	getchar();
	getchar();
	
	while(tc--){
		fill(qtd, 0);
		fill(penalty, 0);
		fill(done, false);
		fill(made, false);
	
		int c, p, t;
		char l;
		
		if(!first) printf("\n");
		first = false; 
		char s[MAX];
		while(gets(s) && strlen(s)!=0){							
			
			sscanf(s, "%d %d %d %c", &c, &p, &t, &l);
		
			made[c] = true;			
			if(l == 'I'){
				if(!done[c][p]){
					penalty[c][p] += 20;
				}		
			}else if(l == 'C'){
				if(!done[c][p]){
					done[c][p] = true;
					qtd[c]++;
					penalty[c][p] += t;
				}			
			}		
		}	
		
		vector<Contestant> v;
		fori(i, 1, 101){			 
			 if(made[i]){
			 	int p = 0;
			 	fori(j, 1, 10) if(done[i][j]) p+= penalty[i][j];			 
			 	v.emplace_back(qtd[i], p, i);			 	
			 };			 
		}						
		sort(v.begin(), v.end());
		
		ford(i, v.size()-1, 0) printf("%d %d %d\n", v[i].team, v[i].qtd, v[i].penalty);
	}
				
	return 0;
}

