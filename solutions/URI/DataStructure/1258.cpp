#include<bits/stdc++.h>
using namespace std;

class person{	
	public:
		string nome, tam, cor; 
};

bool operator<(person a, person b){
	if(a.cor > b.cor) return false;
	else{
		if(a.cor==b.cor){
			if(a.tam > b.tam) return true;
			if(a.tam==b.tam){
				return a.nome<b.nome;
			}else return false;		
		}else return true;
	}	
}


int main(){
	int n;
	
	bool flag = false;	
	while(cin>>n && n!=0){
		
		if(flag) printf("\n");
		else flag = true;
		
		person p[65];
		cin.ignore();
		for(int i=0; i<n; i++){
			getline(cin, p[i].nome);
			cin>>p[i].cor>>p[i].tam;
			cin.ignore();
		}
		sort(p, p+n);
		
		for(int i=0; i<n;i++){
			cout<<p[i].cor<<" "<<p[i].tam<<" "<<p[i].nome<<"\n";
		}		
	}	
	
	return 0;
}
