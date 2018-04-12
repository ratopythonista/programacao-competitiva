#include<bits/stdc++.h>
using namespace std;

int main(){
	int freq[8], n, fst=0, sec=0, trd=0;
	
	scanf("%d", &n);
	
	memset(freq, 0, sizeof freq);
	for(int i=0; i<n; i++){
		int a;
		scanf("%d", &a);
		freq[a]++;
	}
	if(freq[5] != 0 || freq[7] != 0) printf("-1\n");
	else{
		while(freq[1]>0 && freq[2]>0 && freq[4]>0){fst++; freq[1]--; freq[2]--; freq[4]--;} 
		while(freq[1]>0 && freq[2]>0 && freq[6]>0){sec++; freq[1]--; freq[2]--; freq[6]--;}
		while(freq[1]>0 && freq[3]>0 && freq[6]>0){trd++; freq[1]--; freq[3]--; freq[6]--;}
		for(int i=1; i<=7; i++) if(freq[i]!=0){ printf("-1\n"); return 0;}
		
		for(int i=0; i<fst; i++) printf("1 2 4\n");
		for(int i=0; i<sec; i++) printf("1 2 6\n");
		for(int i=0; i<trd; i++) printf("1 3 6\n");	
	
	}
	
	
	
	


	return 0;

}

