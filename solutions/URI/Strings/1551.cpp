#include<bits/stdc++.h>		
using namespace std;									
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

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;

int main(){
	int tc;
	
	scanf("%d ", &tc);
	while(tc--){
		map<char, int> p;
		char s[1005];		
		for(char i='a'; i<='z'; i++) p[i] = 0;
		
		fgets(s, 1005, stdin);
		int sz = strlen(s)-1;	
				
		fori(i, 0, sz) if(s[i]>='a' && s[i]<='z') p[s[i]]++;
		
		int ans = 0;
		for(char i='a'; i<='z'; i++) if(p[i] != 0) ans++;		
		printf(ans==26?"frase completa\n":ans>=13?"frase quase completa\n":"frase mal elaborada\n");	
	
	}	
	return 0;
}
