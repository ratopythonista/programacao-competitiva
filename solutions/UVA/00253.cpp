#include<bits/stdc++.h>
using namespace std;

void vertical(char *s){
	char a, b, c, d;
	
	 a = s[1];
	 b = s[3];
	 c = s[4];
	 d = s[2];
	 s[1] = d;
	 s[3] = a;
	 s[4] = b;
	 s[2] = c;
}

void horizontal(char *s){
	char a, b, c, d;
	
	a = s[0];
	b = s[1];
	c = s[5];
	d = s[4];
	s[0] = d;
	s[1] = a;
	s[5] = b;
	s[4] = c;
}

void cHorizontal(char *s){
	horizontal(s);
	horizontal(s);
	horizontal(s);
}
void cVertical(char *s){
	vertical(s);
	vertical(s);
	vertical(s);	
}

bool solve(char *a, char *b){
	char mov[] = {'v', 'v', 'v', 'v', 'h', 'h', 'h', 'h', 'c', 'c', 'c', 'c', 'k', 'k', 'k', 'k'};
	
	for(int i=0; i<(1<<16); i++){
		char aux[10];
		strcpy(aux, a);
		for(int j=0; j<16; j++){
			if((i & (1<<j)) != 0){
				if(mov[j] == 'v') vertical(aux);
				if(mov[j] == 'h') horizontal(aux);
				if(mov[j] == 'k') cVertical(aux);
				else cHorizontal(aux);				
			} 			
		}
		if(strcmp(aux, b) == 0) return true;		
	}
	
	for(int i=0; i<(1<<16); i++){
		char aux[10];
		strcpy(aux, b);
		for(int j=0; j<16; j++){
			if((i & (1<<j)) != 0){
				if(mov[j] == 'v') vertical(aux);
				if(mov[j] == 'h') horizontal(aux);
				if(mov[j] == 'k') cVertical(aux);
				else cHorizontal(aux);				
			} 			
		}
		if(strcmp(aux, a) == 0) return true;		
	}
	
	return false;	
}

int main(){
	
	char s[20];
	while(scanf("%s", s) == 1){
		char a[10], b[10];
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for(int i=0; i<6; i++)  a[i]   = s[i];
		for(int i=6; i<12; i++) b[i-6] = s[i];
		
		printf(solve(a, b)?"TRUE\n":"FALSE\n");		
		
		
	}	
	
	return 0;
}
