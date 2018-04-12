#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll pot2(ll num){
	ll ans = 1;
	while(num--) ans*=2;
	return ans;
}


int main(){
	ll num;
	scanf("%lld", &num);
	
	ll count=0;
	ll i=2, aux=num;
	
	while((i*i)<=aux){
		if(num%i==0){
			
			count++;
			while(num%i==0) num/=i;
		}		
		i++;	
	}	
	if(num>1) count++;
	printf("%lld\n", pot2(count)-1LL-count);
	return 0;
}
