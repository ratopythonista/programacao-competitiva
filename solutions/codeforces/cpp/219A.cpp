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

int main(){
	int k;
	map<char, int> m;
	char s[1005];
	
	scanf("%d ", &k);
	scanf("%s", s);
	
	int sz = strlen(s);
	fori(i, 0, sz) m[s[i]]++;
	
	bool flag = true;
	
	if(sz % k != 0) flag = false;
	for(auto p: m){
		if(p.ss % k != 0) flag = false; 
	}
	
	char ans [1005];
	int pos = 0;
	for(auto p:m){
		fori(i, 0, p.ss/k) ans[pos++] = p.ff;
	}ans[pos] = '\0';
	
	if(!flag) printf("-1\n");
	else{
		fori(i, 0, k){
			printf("%s", ans);
		}printf("\n");	
	}	
	
	return 0;
}
