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
	int hr, m;
	double h, d, c, n;
	
	scanf("%d %d", &hr, &m);
	scanf("%lf %lf %lf %lf", &h, &d, &c, &n);
	
	double ans = 10000000.0;
	fori(i, 0, 60*24){
		double ct;
		
		if(hr>=20 && hr<=23) ct = c - (2*c)/10;
		else ct = c;
		
		ans = min(ans, ct*ceil(h/n));
		h += d;	
		if(m == 59) hr = ((hr+1)%24);	
		m = (m+1)%60;		
	}	
	
	printf("%.4lf\n", ans);	
		
	return 0;
}
