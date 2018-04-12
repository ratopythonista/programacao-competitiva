#include<bits/stdc++.h>
using namespace std;

int main(){
	int ct;
	vector<int> tabela[110];
	scanf("%d", &ct);
	
	while(ct--){
		int disp, key;
		scanf("%d %d", &disp, &key);
		for(int i=0; i<disp; i++) tabela[i].clear();

		for(int i=0; i<key; i++){
			int k;
			scanf("%d", &k);
			tabela[k%disp].push_back(k);			
		}		
		for(int i=0; i<disp; i++){			
			printf("%d -> ", i);
			for(int j=0; j<tabela[i].size(); j++) printf("%d -> ", tabela[i][j]);
			cout<<"\\"<<endl;
		}
		if(ct!=0) printf("\n");	
	}	

	return 0;
}
