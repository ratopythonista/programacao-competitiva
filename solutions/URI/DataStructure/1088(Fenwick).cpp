#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

class Fenwick{
	public:
		int ft[MAX], sz;
		
		Fenwick(int sz){
			this->sz = sz;
			memset(ft, 0, sizeof ft);
		}
		
		void update(int idx){
			while(idx <= sz){
				ft[idx] += 1;
				idx += (idx&(-idx));			
			}		
		}
		
		int query(int idx){
			int sum = 0;
			while(idx>0){
				sum += ft[idx];
				idx -= (idx&(-idx));			
			}		
			return sum;
		}
};


int main(){
	
	int n, vetor[MAX];
	
	while(scanf("%d", &n) && n!=0){
		for(int i=1; i<=n; i++) scanf("%d", &vetor[i]);
		
		int ans = 0;		
		Fenwick ft(n);
		
		for(int i=1; i<=n; i++){
			ans += (ft.query(n) - ft.query(vetor[i]-1));
			ft.update(vetor[i]);
		}
		printf(ans%2==0?"Carlos\n":"Marcelo\n");	
	}
	
	return 0;
}
