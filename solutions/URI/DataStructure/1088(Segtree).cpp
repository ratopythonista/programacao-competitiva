#include<bits/stdc++.h>
#define MAX 100050

using namespace std;

class SegTree{
	public:
		int st[4*MAX], sz;
		
		SegTree(int sz){
			this->sz = sz;
			for(int i=1; i<=sz; i++) st[i] = 0;		
			build(1, 1, sz);
		}
		
		void build(int idx, int l, int r){
			if(l<r){
				int mid = (l+r)/2;
				build(2*idx, l, mid);
				build(2*idx+1, mid+1, r);
				st[idx] = 0;						
			}else{
				st[idx] = 0;			
			}	
		}
		
		int query(int idx, int l, int r, int i, int j){
			if(i>r || j<l) return -1;
			if(i>=l && j<=r) return st[idx];
			
			int mid = (i+j)/2;
			int p1 = query(2*idx, l, r, i, mid);
			int p2 = query(2*idx+1, l, r, mid+1, j);
			if(p1==-1) return p2;
			if(p2==-1) return p1;			
			return p1+p2;								
		}		
		
		int query(int l, int r){
			return query(1, l, r, 1, sz);		
		}
		
		void update(int idx, int l, int r, int v){
			if(l>v || r<v) return ;
			if(l<r){
				int mid = (l+r)/2;
				update(2*idx, l, mid, v);
				update(2*idx+1, mid+1, r, v);
				st[idx] = st[2*idx] + st[2*idx+1];			
			}else{
				st[idx] = 1;			
			}			
		}
		
		void update(int v){
			update(1, 1, sz, v);		
		}

};

int main(){
	int n, vetor[MAX];
	
	while(scanf("%d", &n) && n!=0){
		for(int i=0; i<n; i++) scanf("%d", &vetor[i]);	
		SegTree st(n);		
		st.update(vetor[0]);
		
		int qt = 0;		
		for(int i=1; i<n; i++){
			int q = st.query(vetor[i]+1, n);
			if(q!=-1) qt += q;
			st.update(vetor[i]);		
		}		
		printf(qt%2==0?"Carlos\n":"Marcelo\n");
				
	}	
	return 0;
}
