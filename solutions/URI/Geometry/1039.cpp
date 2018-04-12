#include<bits/stdc++.h>
using namespace std;


int main(){
	int r1, x1, Y1, r2, x2, y2;
	while(scanf("%d %d %d %d %d %d", &r1, &x1, &Y1, &r2, &x2, &y2)==6){
		double dist = sqrt(pow(abs(x2-x1), 2) + pow(abs(y2-Y1), 2));
		if(double(r1)>=dist+double(r2)) printf("RICO\n");
		else printf("MORTO\n");	
	}
	
	return 0;
}
