#include<bits/stdc++.h>
#define MAX 10005

using namespace std;

int main(){
	int r, h, l, height[MAX], maxRight = 0;	
	memset(height, 0, sizeof height);	
	
	while(scanf("%d %d %d", &l, &h, &r) == 3){
		for(int i = l; i<r; i++) height[i] = max(height[i], h);
		maxRight = max(maxRight, r);	
	}
	
	bool first = true;
	for(int i = 1; i<=maxRight; i++){
		
		if(height[i] != height[i-1]){
			if(!first) printf(" ");
			printf("%d %d", i, height[i]);
		}	
		first = false;
		
	}printf("\n");
	
	return 0;
}
