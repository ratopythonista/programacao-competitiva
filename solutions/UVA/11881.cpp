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

int t;
double cf[15];

double f(double irr){
	double ans = cf[0];
	fori(i, 1, t+1) ans += cf[i] / pow((1.0 + irr), i);		
	return ans;
}

int main(){

	while(scanf("%d", &t) && t!=0){
		fori(i, 0, t+1) scanf("%lf", &cf[i]);
		
		double lo = -0.99, hi = 10000000.0, mid;
		if(f(lo) * f(hi) >= 0)printf("No\n");
		else{
			fori(i, 0, 60){
				mid = (lo+hi)/2.0;
				if(f(mid)*f(lo) >= 0)lo = mid;
				else hi = mid;
			}
			printf("%.2lf\n", mid);
		}
		
		
		
		
		
		
		
			
		
		
	}

	return 0;
}
