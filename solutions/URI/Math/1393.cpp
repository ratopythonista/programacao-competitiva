#include<bits/stdc++.h>
using namespace std;
int dest;
int memo[50];

int mov(int pos){
	if(memo[pos]!=-1) return memo[pos];
	if(pos == dest) return memo[pos] = 1;
	if(pos>dest) return memo[pos]= 0;
	else return memo[pos] = mov(pos+1)+mov(pos+2);	
}

int main(){
	while(scanf("%d", &dest) && dest !=0){	
		memset(memo, -1, sizeof(memo));
		printf("%d\n", mov(0));	
	}

return 0;
}
