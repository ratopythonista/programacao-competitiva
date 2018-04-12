#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	
	scanf("%d", &tc);
	while(tc--){
		int m[15][15];
		memset(m, 0, sizeof(m));
		
		for(int i=0, j=2; i<9; i+=2, j+=2){
			for(int k=0; k<j; k+=2) scanf("%d", &m[i][k]);	
		}
		
		m[8][1] = (m[6][0] - (m[8][0]+m[8][2]))/2;
		m[8][3]	= (m[6][2] - (m[8][2]+m[8][4]))/2;
		m[8][5] = (m[6][4] - (m[8][4]+m[8][6]))/2;
		m[8][7]	= (m[6][6] - (m[8][6]+m[8][8]))/2;	
		
		for(int i=7; i>=0; i--){
			for(int j=0; j<=i; j++){
				m[i][j] = m[i+1][j] + m[i+1][j+1];			
			}	
		}
		
		for(int i=0; i<9; i++){
			bool first = true;
			for(int j=0; j<(i+1); j++){
				if(!first) printf(" ");
				first = false;
				printf("%d", m[i][j]);
			}printf("\n");
		}
	}
	
	return 0;
}
