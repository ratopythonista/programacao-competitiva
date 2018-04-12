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
#define oo 1<<25

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////

int main(){
	int tc, in[10][100], ar[100];
	scanf("%d", &tc);
	
	while(tc--){
		int n, m;
		
		fill(ar, 0);
		scanf("%d %d", &n, &m);
		
		fori(i, 0, n){
			fori(j, 0, m){ 				
				scanf("%d", &in[i][j]);
				if(in[i][j] == 1) ar[j]++;				
			}
		}
		
		bool flag = true;
		fori(i, 0, m) if(ar[i] != 2) flag = false;
		
		fori(i, 0, n){
			set<int> s;
			fori(j, 0, m){
				if(in[i][j] == 1){					
					fori(k, 0, n){
						if(in[k][j] == 1 && k != i){							
							auto it = s.find(k);
							if(it != s.end()){ flag = false; break;}
							s.insert(k);	
						}											
					}				
				}			
			}
		}
		
		printf(flag?"Yes\n":"No\n");		
	}	
	
	return 0;
}
