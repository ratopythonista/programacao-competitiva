#include<bits/stdc++.h>
using namespace std;

int main(){
	int x1, x2, y1, y2;
	while(true){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if(x1==0 and x2==0 and y1==0 and y2==0) break;
		
		if(x1==x2 && y1==y2) printf("0\n");
		else if(x1==x2 || y1==y2)printf("1\n");
		else{
			int dx = x2-x1, dy = y2-y1;
			dx = dx<0?dx*(-1):dx;
			dy = dy<0?dy*(-1):dy;
			printf(dx==dy?"1\n":"2\n");	
		}	
	}	
	
	return 0;
}
