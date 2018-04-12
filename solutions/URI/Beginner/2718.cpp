#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, ans = 0, quant;
	scanf("%d", &n);
	
	while(n--){
		ll a;
		int ans = 0;
		quant=0;
		scanf("%lld", &a);
		for(int i=0; i<50; i++){
			if((a&(1LL<<i))!=0) quant++;
			else quant=0;
			ans = max(ans, quant);					
		}
		printf("%d\n", ans);		
	}		
	return 0;
}
