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

int qtd, c[20], w[20];
char hint[20][6], chute[6];

bool can(int pos){

	int a = 0, b = 0; 
	bitset<6> g, h;
	
	g.reset();	
	h.reset();
	fori(i, 0, 4)
		if(hint[pos][i] == chute[i]){
			a++;
			g[i] = true;
			h[i] = true;
		}
	
	fori(i, 0, 4){
		if(not g[i]){
			fori(j, 0, 4)
				if(chute[i] == hint[pos][j] && not h[j]){
					h[j] = true;
					b++;
					break;
				}
		}		
	}	
	return (a == c[pos] && b == w[pos]);			
}

bool isValid(){	
	fori(i, 0, qtd){		
		if(!can(i)) return false;
	}return true;	
}

int main(){
	
	int tc;
	
	scanf("%d", &tc);
	
	while(tc--){
		scanf("%d", &qtd);		
		fori(i, 0, qtd) scanf("%s %d/%d", hint[i], &c[i], &w[i]);
		
		vi ans;
		
		fori(a, 0, 10){
			fori(b, 0, 10){
				fori(c, 0, 10){
					fori(d, 0, 10){					
						chute[0] = '0'+a; chute[1] = '0'+b; chute[2] = '0'+c; chute[3] = '0'+d;
						if(isValid()){
							ans.pb(a*1000 + b*100 + c*10 + d);
						}					
					}
				}
			}		
		}		
		
		if(ans.empty()) printf("impossible\n");
		else if(ans.size()>1) printf("indeterminate\n");
		else printf("%04d\n", ans[0]);	
	}	
		
	return 0;
}
