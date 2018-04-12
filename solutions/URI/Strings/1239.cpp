#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	
	while(getline(cin, s)){
		bool it = true, neg = true;		
		for(int i=0; i<s.length(); i++){
			if(s[i]=='_'){
				if(it) cout<<"<i>", it = false;
				else cout<<"</i>", it = true;		
			}else if(s[i]=='*'){
				if(neg) cout<<"<b>", neg = false;
				else cout<<"</b>", neg = true;
			}else cout<<s[i];
		}cout<<endl;
	}

	return 0;
}
