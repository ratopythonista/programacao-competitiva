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
int t[10][10];
int c[10], ans;
bool can(int pos, int i){
	fori(j, 0, pos){
		if(c[j] == i) return false;
		if(abs(j-pos) == abs(i-c[j])) return false;
	}return true;
}

void solve(int pos){
	if(pos == 8){
		int aux = 0;
		fori(i, 0, 8) aux += t[c[i]][i];
		ans = max(ans, aux);
	}

	fori(i, 0, 8){
		if(can(pos, i)){
			c[pos] = i;
			solve(pos+1);
		}
	}
}

void print(int num){
	if(num<10) printf("    %d", num);
	else if(num<100) printf("   %d", num);
	else if(num<1000) printf("  %d", num);
	else if(num<10000) printf(" %d", num);
	else printf("%d", num);
	printf("\n");
}

int main(){
	int qtd;
	
	scanf("%d", &qtd);
	while(qtd--){
		fori(i, 0, 8) fori(j, 0, 8) scanf("%d", &t[i][j]);
		ans = -10000000;
		solve(0);
		print(ans);
	}	

	return 0;
}
