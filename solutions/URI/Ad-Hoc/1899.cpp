#include<bits/stdc++.h>
#define MAX 1005
#define eps 0.0000000001
using namespace std;

int main(){
	int n; 
	double dist[MAX][3];
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lf %lf %lf", &dist[i][0], &dist[i][1], &dist[i][2]);			
	}
	double d, b, a;
	scanf("%lf %lf %lf", &d, &b, &a);
	bool flag;	
	for(int i=int(b); i<=int(a); i++){
		flag = true;
		for(int j=0; j<n; j++){
			double alt = (dist[j][0]*i)/d;			
			if((alt>=dist[j][1]) && (alt<=dist[j][2])) continue;
			else{
				flag = false;
				break;
			}
		}
		if(flag) break;
	}
	printf(flag?"Y\n":"N\n");	
	
	return 0;
}
