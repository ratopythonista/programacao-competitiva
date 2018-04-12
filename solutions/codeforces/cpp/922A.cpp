#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	int qtd = (y-1);
	
	if(y == 0) printf("No\n");
	else if(x == 0 && y > 1) printf("No\n");	
	else if(y == 1 && x != 0) printf("No\n");
	else if(qtd <= x && (x - qtd)%2 == 0) printf("Yes\n");
	else printf("No\n");	
	
	return 0;
}
