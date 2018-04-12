#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[2005], b[2005], n;
	set<int> cnj;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		cnj.insert(a[i]);
	}
	for(int i=0; i<n; i++){
		scanf("%d", &b[i]);
		cnj.insert(b[i]);
	}
	
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			set<int>::iterator it = cnj.find(a[i]^b[j]);
			if(it != cnj.end()) ans++;
		}			
	}printf(ans%2==0? "Karen\n":"Koiomy\n");
	
	

	return 0;
}
