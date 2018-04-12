#include<bits/stdc++.h>
#define MAX 100050
using namespace std;

class SegTree{
	public:
		int *vetor, sz;
		vector<pair<int, int>> st;
		
		
		SegTree(int *vetor, int sz){
			this->sz    = sz;
			this->vetor = vetor;
			st.reserve(4*sz);
			build(1, 1, sz);		
		}
		
		void build(int i, int l, int r){
			if(l<r){
				int mid = (l+r)/2;
				build(2*i, l, mid);
				build(2*i+1, mid+1, r);
				st[i].first = vetor[st[2*i].first]<vetor[st[2*i+1].first]?st[2*i].first:st[2*i+1].first;
				st[i].second = vetor[st[2*i].second]>vetor[st[2*i+1].second]?st[2*i].second:st[2*i+1].second;							
			}else{								
				st[i].first  = l;
				st[i].second = l;			
			}		
		}
		
		pair<int, int> query(int l, int r){
			return query(1, l, r, 1, sz);
		}
		pair<int, int> query(int idx, int l, int r, int i, int j){
			if(i>r || j<l) return make_pair(-1, -1);
			if(i>=l && j<=r) return st[idx];
			
			int mid = (i+j)/2;
			pair<int, int> p1 = query(2*idx, l, r, i, mid);
			pair<int, int> p2 = query(2*idx+1, l, r, mid+1, j);
			if(p1.first == -1) return p2;
			if(p2.first == -1) return p1;
			pair<int, int> p3;
			p3.first  = vetor[p1.first]<vetor[p2.first]?p1.first:p2.first;
			p3.second = vetor[p1.second]>vetor[p2.second]?p1.second:p2.second;
			return p3;	
		}
		
		void update(int idx, int l, int r, int v, int pos){			//first = min query, second = max query
			if(l>pos || r<pos) return ;
			if(l<r){
				int mid = (l+r)/2;
				update(2*idx, l, mid, v, pos);
				update(2*idx+1, mid+1, r, v, pos);
				st[idx].first    = vetor[st[2*idx].first]<vetor[st[2*idx+1].first]?st[2*idx].first:st[2*idx+1].first;
				st[idx].second   = vetor[st[2*idx].second]>vetor[st[2*idx+1].second]?st[2*idx].second:st[2*idx+1].second;				
			}else{
				vetor[pos] = v;	
			}				
		}	
		void update(int pos, int v){
			update(1, 1, sz, v, pos);		
		
		}	
		
};


int main(){
	int n, q, op, l, r;
	int vetor[MAX];
	
	while(scanf("%d", &n)==1){
		for(int i=1; i<=n; i++) scanf("%d", &vetor[i]);
		SegTree st(vetor, n);
		scanf("%d", &q);
		for(int i=0; i<q; i++){
			scanf("%d %d %d", &op, &l, &r);
			if(op==1){
				st.update(l, r);
			}else{
				pair<int, int> p = st.query(l, r);
				printf("%d\n",vetor[p.second]-vetor[p.first]);			
			}	
			
		}
	
	
	}






























	return 0;
}
