#include<bits/stdc++.h>
using namespace std;

int main(){
	int ct, n, alturas[240];
	scanf("%d", &ct);
	
	while(ct--){
		scanf("%d", &n);
		memset(alturas, 0, sizeof(alturas));
		for(int i=0; i<n; i++){
			int a;
			scanf("%d", &a);
			alturas[a]++;
		}
		bool flag = true;
		for(int i=0; i<=230; i++){
			for(int j=0; j<alturas[i]; j++){
				if(flag) printf("%d", i);
				else printf(" %d", i);
				flag = false;
			}
		}printf("\n");
	}	
	return 0;
}
