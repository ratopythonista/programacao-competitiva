#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1, h2, m1, m2;
	while(true){
		cin>>h1>>m1>>h2>>m2;
		if(h1==0 and m1==0 and h2==0 and m2==0) break;
		int ans = 0;
		while(h1!=h2 || m1!=m2){
			m1 = m1==59?0:m1+1;
			if(m1==0) h1 = h1==23?0:h1+1;		
			ans++;			
		}
		cout<<ans<<endl;			
	}
	return 0;
}
