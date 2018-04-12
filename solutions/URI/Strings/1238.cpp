#include<bits/stdc++.h>
using namespace std;

int main(){
	int ct;
	scanf("%d", &ct);
	
	while(ct--){
		string s1, s2;
		cin>>s1>>s2;				
		for(int i=0; i<max(s1.length(), s2.length()); i++){
			if(i<s1.length()) cout<<s1[i];
			if(i<s2.length()) cout<<s2[i];				
		}
	
		cout<<endl;
	}

	return 0;
}
