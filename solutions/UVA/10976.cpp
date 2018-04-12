#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

inline int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

inline int lcm(int a, int b){
	return (a*b)/(gcd(a, b));
}

int main(){
	int n;
	
	while(scanf("%d", &n)==1){
	
		vector<pair<int, int>> ans;
		for(int i=n+1; i<=2*n; i++){
				
			int g = lcm(n, i);
			int b = (g/n - g/i);
						
			if(g % b == 0) ans.push_back(make_pair(g/b, i));
		}
		
		printf("%lu\n", ans.size());
		for(auto i: ans) printf("1/%d = 1/%d + 1/%d\n", n, i.f, i.s);		
					
	}

	return 0;
}
