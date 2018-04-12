#include<bits/stdc++.h>
#define MAX 100050
using namespace std;

int st[4*MAX], vetor[MAX];
class SegTree{
	public:
		int n;		
		SegTree(int n){
			this->n = n;			
			build(1, 1, n);		
		}	
		
		void build(int idx, int l, int r){
			if(l<r){
				int mid = (l+r)/2;
				build(2*idx, l, mid);
				build(2*idx+1, mid+1, r);
				st[idx] = st[2*idx]*st[2*idx+1];							
				return ;
			}
			if(vetor[l]>0) vetor[l] = 1;
			else if(vetor[l]<0) vetor[l] = -1;
			st[idx] = vetor[l];	
		}
		
		int query(int idx, int l, int r, int i, int j){
			if(j<l || i>r) return 1;
			if(i>=l && j<=r) return st[idx];			
			int mid = (i+j)/2;
			int p1 = query(2*idx,   l, r, i,     mid);
			int p2 = query(2*idx+1, l, r, mid+1, j);
			return p1*p2;		
		}	
			
		int query(int l, int r){
			return query(1, l, r, 1, n);				
		}
		
		void update(int idx, int i, int v, int l, int r){
			if(l>i || r<i) return ;			
			if(l<r){
				int mid = (l+r)/2;
				update(2*idx, i, v, l, mid);
				update(2*idx+1, i, v, mid+1, r);
				st[idx] = st[2*idx]*st[2*idx+1];
			}else{
				if(v<0) vetor[l] = -1;
				else if(v>0) vetor[l] = 1;
				else vetor[l] = 0;
				st[idx] = vetor[l];			
			}
					
		}
		
		void update(int idx, int v){
			update(1, idx, v, 1, n);
		}
		
};

int main(){
	int n, k;
	ios_base::sync_with_stdio(false);
	while(cin>>n>>k){
		for(int i=1; i<=n; i++) cin>>vetor[i];
		SegTree st(n);
		for(int i=0; i<k; i++){
			char op;
			int l, r;
			cin>>op>>l>>r;
			if(op=='C'){
				st.update(l, r);				
			}else{
				int q = st.query(l, r);
				if(q==0) cout<<'0';
				else cout<<(q>0?'+':'-');
			}		
		}cout<<"\n";	
		
	}

	return 0;
}

