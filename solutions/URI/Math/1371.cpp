#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> sq;	
	int num;
	
	for(int i=1; i<10000; i++) sq.insert(i*i);	
	
	while(scanf("%d", &num)){		
		bool first = true;
		if(num == 0) break;
		
		for(auto i: sq){
			if(i > num) break;
			if(!first) printf(" ");
			else first = false;	
			
			printf("%d", i);					
		}	
		
		printf("\n");
	}
	
	return 0;
}
