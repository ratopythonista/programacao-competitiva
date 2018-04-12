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
const int sz = 8;
int m, n;
char t[10][10];
char s[] = {'@', 'I', 'E', 'H', 'O', 'V', 'A', '#'};
ii mov[] = {{0, 1}, {0, -1}, {-1, 0}};
char ans[10];

bool can(int pos, int i, int r, int c){
	int a = mov[i].first  + r;
	int b = mov[i].second + c;
	if((a<0 || a>=m) || (b<0 || b>=n)) return false;
	if(t[a][b] != s[pos+1]) return false;
	return true;
}

bool solve(int pos, int r, int c, int p){
	if(pos == 7){
		fori(i, 0, 7){
			printf(ans[i]=='r'?"right":ans[i]=='l'?"left":"forth");
			if(i!=6) printf(" ");
		}printf("\n");
		return true;
	}	
	
	fori(i, 0, 3){
		if(can(pos, i, r, c)){						
			ans[p] = i==0?'r':(i==1?'l':'f');
			bool b = solve(pos+1, r+mov[i].first, c+mov[i].second, p+1);
			if(b) return true;
		}		
	}return false;
}

int main(){
	int ct, a, b;
	
	scanf("%d", &ct);
	
	while(ct--){
		scanf("%d %d", &m, &n);
		fori(i, 0, m) scanf("%s", t[i]);
		
		fori(i, 0, m)
			fori(j, 0, n)
				if(t[i][j] == '@'){
					a = i;
					b = j;
					break;
				}
		solve(0, a, b, 0);		
		
	}
	return 0;
}

