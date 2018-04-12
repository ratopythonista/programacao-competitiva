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
	int cf, ca, da[15], df[15];
	double ratio[110];
	
	while(scanf("%d", &cf) && cf!=0){
		scanf("%d", &ca);
		fori(i, 0, cf) scanf("%d", &df[i]);
		fori(i, 0, ca) scanf("%d", &da[i]);
		int pos = 0;
		
		fori(i, 0, ca)
			fori(j, 0, cf)
				ratio[pos++] = double(da[i]) / double(df[j]);		
		sort(ratio, ratio+pos);
		double ans = -10000000.0;
		
		fori(i, 0, pos-1)
			if(ratio[i+1] != ratio[i]) ans = max(ans, ratio[i+1]/ratio[i]);
			
		printf("%.2lf\n", ans);		
	}
	
	return 0;
}
