#include<bits/stdc++.h>
using namespace std;

int main(){
	int aux = 0;	
	string ans[] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
	
	for(int i=0; i<9; i++){
		int a;
		cin>>a;
		aux += a;
	}
	aux += aux>0?-1:0;
	
	cout<<ans[aux%9]<<endl;
	return 0;
}
