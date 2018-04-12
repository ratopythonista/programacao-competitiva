#include<bits/stdc++.h>
using namespace std;

int main(){
	int ct;
	cin>>ct;
	
	while(ct--){
		int n, peso;
		cin>>n>>peso;
		
		int ans = 1, acum = 0;
		while(n--){
			int aux;
			cin>>aux;			
			if((acum + aux) > peso){
				ans++;
				acum = aux;
			}else acum += aux;		
		}
		cout<<ans<<endl;	
	}
	return 0;
}
