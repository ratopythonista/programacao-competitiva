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

float l[10];
int g[10], y[10], r[10], qtd;

void print(vi ans){	
	fori(i, 0, ans.size()){
		if(i == ans.size() || ans[i]+1 != ans[i+1]) printf(" %d", ans[i]);
		else{
			int lo = ans[i], hi=ans[i+1];
			while(i<ans.size()-1 && ans[i]+1 == ans[i+1]) {hi = ans[i+1]; i++;}	
			printf(" %d-%d", lo, hi);
		}
		if(i != ans.size()-1) printf(",");	
	
	}printf("\n");
}

bool aux(int pos, float time){	
	while(true){
		//debug(time);
		time -= (g[pos] + y[pos]);
		if(time <= 0.0) return true;
		time -= (r[pos]);				
		if(time<0.0) return false;			
	}cout<<endl;
}

bool can(int speed){	
	
	fori(i, 0, qtd){
		float t = (l[i] / speed)*3600.0;			
		if(!aux(i, t))return false;
	}
	
	return true;
}

int main(){
	int tc = 1;
	while(scanf("%d", &qtd) && qtd!=-1){
		fori(i, 0, qtd) scanf("%f %d %d %d", &l[i], &g[i], &y[i], &r[i]);	
				
		vi ans;
		fori(i, 30, 61) if(can(i)) ans.pb(i);
		
		printf("Case %d:", tc++);
		if(ans.empty()) printf(" No acceptable speeds.\n");
		else print(ans);			
	}	
	
	return 0;
}
