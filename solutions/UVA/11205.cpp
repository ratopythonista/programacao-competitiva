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
	int tc, v[105][20], led, sym;
	
	scanf("%d", &tc);
	while(tc--){
		scanf("%d %d", &led, &sym);
		int ans = 100000;
		
		fori(i, 0, sym) fori(j, 0, led) scanf("%d", &v[i][j]);	
		
		bitset<(1<<16)> b;	
		
		fori(mask, 0, (1<<led)){
			b.reset();
			bool flag = true;
			fori(i, 0, sym){
				int p = 1, acc = 0;
				ford(j, led-1, 0){
					if((mask & (1<<j)) == 0){
						acc += (p*v[i][j]);
						p = (p<<1);
					}					
				}				
				if(b[acc]) flag = false;
				b[acc] = true;		
			}	
			if(flag){
				int c = 0;
				fori(i, 0, led) if((mask & (1<<i)) != 0) c++;
				ans = min(ans, led-c);								
			}	
		}
		printf("%d\n", ans);
	}		
		
	return 0;
}
