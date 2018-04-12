#include<bits/stdc++.h>
using namespace std;

int main(){	
	int n;
	
	while(scanf("%d", &n) && n!=0){
		vector<int> vetor;
		for(int i=0; i<n; i++){
			int a;
			scanf("%d", &a);
			vetor.push_back(a);			
		}
		int ans = 0;
		for(int i=0; i<n; i++){
			if(vetor[(i-1+n)%n]<vetor[i] && vetor[(i+1)%n]<vetor[i]) ans++;
			else if(vetor[(i-1+n)%n]>vetor[i] && vetor[(i+1)%n]>vetor[i])ans++;
		}printf("%d\n", ans);			
	}

	return 0;
}
