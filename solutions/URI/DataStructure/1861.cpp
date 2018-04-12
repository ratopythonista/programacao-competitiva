#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string, int> assassinos;
	set<string> assassinados;
	
	string a, b;
	while(cin>>a>>b){
		assassinos[a]++;
		assassinados.insert(b);		
	}
	printf("HALL OF MURDERERS\n");
	
	for(pair<string, int> p: assassinos){
		set<string>::iterator it = assassinados.find(p.first);
		if(it == assassinados.end()){
			cout<<p.first<<" "<<p.second<<"\n";
		}		
	}
	
	return 0;
}
