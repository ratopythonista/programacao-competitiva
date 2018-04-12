#include<bits/stdc++.h>
#define MAX 100050
#define N 1000000
using namespace std;

int main(){
	int n, m;
		
	while(scanf("%d %d", &n, &m)==2){
		map<int, vector<int>> oc;
		for(int i=1; i<=n; i++){
			int num;
			scanf("%d", &num);
			oc[num].push_back(i);		
		}
		for(int i=0; i<m; i++){
			int k, v;
			scanf("%d %d", &k, &v);
			if(oc[v].size()>=k) printf("%d\n", oc[v][k-1]);
			else printf("0\n");			
		}
	
	}

	return 0;
}
