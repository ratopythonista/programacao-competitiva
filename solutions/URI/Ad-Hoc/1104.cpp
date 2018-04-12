#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	while(scanf("%d %d", &a, &b) && (a!=0 || b!=0)){
		set<int> cardA, cardB;
		for(int i=0; i<a; i++){
			int v;
			scanf("%d", &v);
			cardA.insert(v);
		}
		for(int i=0; i<b; i++){
			int v;
			scanf("%d", &v);
			cardB.insert(v);
		}
		int quantA = 0, quantB = 0;		
		
		for(int v: cardA){
			set<int>::iterator it = cardB.find(v);
			if(it==cardB.end()) quantA++;			
		}
		
		for(int v: cardB){
			set<int>::iterator it = cardA.find(v);
			if(it==cardA.end()) quantB++;
		}
		printf("%d\n", min(quantA, quantB));	
		
	}
	
	
	return 0;
}
