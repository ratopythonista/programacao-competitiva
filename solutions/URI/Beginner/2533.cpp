#include<bits/stdc++.h>
using namespace std;

int main(){	
	int m;
	while(scanf("%d", &m) == 1){
		int sumA=0, sumB=0;
		while(m--){
			int a, b;
			scanf("%d %d", &a, &b);		
			sumA+= (a*b);
			sumB+=b;	
		}
	
		double ans = double(sumA) / (double(sumB)*100.0);
	
		printf("%.4f\n", ans);
	}

	return 0;
}
