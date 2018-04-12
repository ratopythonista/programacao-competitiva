#include<bits/stdc++.h>
using namespace std;

bool unique(int num){
	bitset<10> vetor;	
	vetor.reset();	
	
	while(num>0){
		if(vetor[num%10]) return false;
		vetor[num%10] = true;
		num /= 10;		
	}
	
	return true;
}

int main(){
	
	int num;
	scanf("%d", &num);
	num++;
	
	while(!unique(num)) num++;	
	printf("%d\n", num);

	return 0;
}
