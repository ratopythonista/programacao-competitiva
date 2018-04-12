#include<bits/stdc++.h>
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
	multiset<pair<pair<int, int>, int> > s;
	int id, p;
	char in[100];
	
	while(scanf(" %[^\n]s", in)){		
		if(in[0] == '#') break;
		sscanf(in, " Register %d %d", &id, &p);					
		s.insert(mp(mp(p, id), p));			
	}
	
	int k;
	scanf("%d", &k);
	
	while(k--){
		auto p = *(s.begin());
		printf("%d\n", p.ff.ss);		
		auto i = mp(mp(p.ff.ff+p.ss, p.ff.ss), p.ss);
		s.erase(s.begin());
		s.insert(i);
	}
		
	return 0;
}
