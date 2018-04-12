#include<bits/stdc++.h>
using namespace std;

int main(){
	int qtd;
	char s[15];
	scanf("%d", &qtd);
	size_t sz;
	while(qtd--){
		scanf("%s", s);
		sz = strlen(s);
		sort(s, s+strlen(s));
		
		do{
			printf("%s\n", s);		
		}while(next_permutation(s, s+sz));
		printf("\n");
	}
	return 0;
}
