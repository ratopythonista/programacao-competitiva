#include<bits/stdc++.h>
using namespace std;

int main(){
	int ct;
	ios_base::sync_with_stdio(false);	
	
	cin>>ct;	
	while(ct--){
		map<string, pair<int, int>> dict;
		int a, b, qtd, q, num;
		string s, ans;
		
		cin>>qtd;
		while(qtd--){		
			cin>>s>>a>>b;
			dict[s] = make_pair(a, b);
		}
		
		cin>>q;		
		while(q--){			
			cin>>num;
			
			qtd = 0;
			for(auto i: dict){
				if(dict[i.first].first <= num && dict[i.first].second>=num){
					ans = i.first;
					qtd++;
					if(qtd > 1) break;
				}			
			}
			if(qtd==0 || qtd>1) cout<<"UNDETERMINED\n";
			else cout<<ans<<"\n";	
		
		}	
		if(ct!=0) cout<<"\n";	
	}

	return 0;
}
