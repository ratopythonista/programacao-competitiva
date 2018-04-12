#include<bits/stdc++.h>
using namespace std;

int main(){
	
	map<string, int> arvores;
	int ct;
	string s;
		
	scanf("%d", &ct);
			
	cin.ignore();
	getline(cin, s);	
	while(ct--){		
		int qtd = 0;
		while(true){
			getline(cin, s);		
			if(s.empty()) break;			
			arvores[s]++;
			qtd++;
		}		
		map<string, int>::iterator it;		
		for(it=arvores.begin(); it!=arvores.end(); it++){			
			cout<<it->first;
			printf(" %.4f\n", (100.0*(it->second))/qtd);			
		}
		if(ct) cout<<endl;
		arvores.clear();						
	}
	
	return 0;
}
