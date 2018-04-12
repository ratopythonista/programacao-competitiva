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
	
	ios_base::sync_with_stdio(false);	
	
	map< string, set<string> > m;
	string s;
	
	while(cin >> s && s!="XXXXXX"){
		string aux = s;
		sort(aux.begin(), aux.end());		
		m[aux].insert(s);		
	}
	
	while(cin >> s && s!="XXXXXX"){
		sort(s.begin(), s.end());
		
		auto it = m.find(s);
		
		if(it != m.end()){
			for(auto i: it->second){
				cout<<i<<endl;			
			}			
		}else cout<<"NOT A VALID WORD"<<endl;
		
		cout<<"******"<<endl;	
	}
		
	return 0;
}
