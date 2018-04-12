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

typedef struct node{
	string s;
	int n;
}node;

bool operator < (const node& a, const node& b){
	if(a.n > b.n) return true;
	else if(a.n == b.n) return a.s < b.s;
	return false;
}

bool isall(string& s){
	for(auto i: s) if(!isupper(i) && i != ' ') return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
		
	while(true){
		string s, atual;
		map<string, set<string>> m;
		unordered_map<string, int> cant;
		
		while(getline(cin, s) && (s != "0" && s!="1")){		
			
			if(isall(s)){
				atual = s;		
				m[atual];				
			}	
			else{			
				auto it = m[atual].find(s);
				if(it == m[atual].end()) cant[s]++;			
				m[atual].insert(s);				
			}								
		}
		if(s == "0") break;
		
		set<node> ans;
		
		for(auto p: m){			
			node n;
			int sz = p.second.size();
			for(auto i: p.second) if(cant[i]>1) sz--;	
			n.n = sz;
			n.s = p.first;			
			ans.insert(n);		
		}
		
		for(auto i: ans){
			cout<<(i.s)<<" "<<(i.n)<<endl;		
		}		
	}	
		
	return 0;
}
