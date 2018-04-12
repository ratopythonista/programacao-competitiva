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
	int tc, t = 1;
	
	scanf("%d", &tc);
	
	while(tc--){
		char m[10][10], aux[10], aux2[10][10];
		int n, q;
		
		scanf("%d", &n);
		fori(i, 0, n) scanf(" %s", m[i]);	
		
		scanf("%d", &q);		
		while(q--){
			char c[20];
			scanf(" %[^\n]s", c);		
			
			if(c[0] == 'r'){
				int a = c[4] - '0';
				int b = c[6] - '0';	
				a--;
				b--;					
				
				fori(i, 0, n) aux[i]  = m[a][i];
				fori(i, 0, n) m[a][i] = m[b][i];
				fori(i, 0, n) m[b][i] = aux[i];
			}
			else if(c[0] == 'c'){				
				int a = c[4] - '0';
				int b = c[6] - '0';		
				a--; b--;
						
				fori(i, 0, n) aux[i]  = m[i][a];
				fori(i, 0, n) m[i][a] = m[i][b];
				fori(i, 0, n) m[i][b] = aux[i];		
			}else if(c[0] == 'i'){
				fori(i, 0, n){
					fori(j, 0, n){
						if(m[i][j] == '9') m[i][j] = '0';
						else m[i][j]++;					
					}
				}			
			}else if(c[0] == 'd'){
				fori(i, 0, n){
					fori(j, 0, n){
						if(m[i][j] == '0') m[i][j] = '9';
						else m[i][j]--;					
					}
				}			
			}else{
				fori(i, 0, n)
					fori(j, 0, n)
						aux2[j][i] = m[i][j];
				fori(i, 0, n)
					fori(j, 0, n)
						m[i][j] = aux2[i][j];
			}			
		}
		
		printf("Case #%d\n", t++);
		fori(i, 0, n) printf("%s\n", m[i]);
		printf("\n");
	}
	
	return 0;
}
