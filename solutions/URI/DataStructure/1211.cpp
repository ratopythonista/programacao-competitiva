#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	string telefone[100010];
	int n;
	
	while(cin>>n){
		for(int i=0; i<n; i++) cin>>telefone[i];
		sort(telefone, telefone+n);
		int ans = 0;
			
		for(int i=1; i<n; i++){
			int j = 0, aux = 0;
			while(telefone[i][j]==telefone[i-1][j] && j<telefone[i].size()){
				j++;
				aux++;
			}ans += aux;					
		}cout<<ans<<endl;	
	}
	return 0;
}
