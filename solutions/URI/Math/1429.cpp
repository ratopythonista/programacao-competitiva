#include<bits/stdc++.h>
using namespace std;

int fat[] = {1, 1, 2, 6, 24, 120, 720};

int main(){
	int num;
	
	while(scanf("%d", &num) && num!=0){
		int lg = floor(log10(num))+1;
		int ans = pow(10, lg-1);
		int total = 0;
		for(int i=lg; i>0; i--){
			total += (num/ans)*fat[i];
			num = num%ans;						
			ans = ans/10;					
		}
		printf("%d\n", total);		
	
	}
	

return 0;
}
