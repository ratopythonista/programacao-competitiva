#include<bits/stdc++.h>
using namespace std;

int main(){
	int numBancos, numDiv, reservas[30];
	
	while(scanf("%d %d", &numBancos, &numDiv) && (numBancos!=0 || numDiv!=0)){	
		
		for(int i=1; i<=numBancos; i++) scanf("%d", &reservas[i]);	
			for(int i=0; i<numDiv; i++){
				int d, c, v;
				scanf("%d %d %d", &d, &c, &v);	
				reservas[d] -= v;
				reservas[c] += v;		
			}
	
		bool flag = true;
		for(int i=1; i<=numBancos; i++){
			if(reservas[i]<0){
				flag = false;
				break;
			}
		}	
		printf(flag?"S\n":"N\n");
	}
return 0;
}
