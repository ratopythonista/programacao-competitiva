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
	int m, n, a, b, c, d, e, f, pos;	
	char ans[100000];
	
	while(scanf("%d %d", &m, &n)){
		if(m==1 && n==1) break;
		a = 1, b = 1, c = 0, d = 1, e = 1, f = 0, pos = 0;
		
		while(m != a || n!=b){
			if(n*a > m*b){
				ans[pos++] = 'L'; 
				e = a;
				f = b;
				a += c;
				b += d;			
			}else{
				ans[pos++] = 'R';
				c = a;
				d = b;
				a += e;
				b += f;			
			}		
		}ans[pos] = '\0';
		
		printf("%s\n", ans);	
	}	
	return 0;
}
