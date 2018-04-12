#include<bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define fori(a, l, f) for(int a = l; a<f; ++a)
#define ford(a, l, f) for(int a=l; a>=f; --a)
#define pq priority_queue
#define checkBit(mask, i) ((mask & (1 << i)) != 0) ? true:false
#define setBit(mask, i) mask = mask | (1 << i)
#define debug(x) cout<<x<<endl
#define fill(x, y) memset(x, y, sizeof x)
#define MAX 100005

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////

class node{
	public:
		int num, ant, prox;	
};

class lista{
	public:
		node vetor[MAX];
		int n;
	
		lista(int n){
			vetor[0].num = 0;
			vetor[n+1]. num = n+1;
			
			fori(i, 1, n+1){
				vetor[i].num = i;
				vetor[i].ant = i-1;
				vetor[i].prox = i+1;			
			}
			this->n = n;				
		}	
		
		int ant(int num){
			return vetor[num].ant;		
		}
		int prox(int num){
			return vetor[num].prox;
		}
		
		void remove(int l, int r){
			if(vetor[ant(l)].num == 0) printf("*");
			else printf("%d", vetor[ant(l)].num);
			
			if(vetor[prox(r)].num == (n+1)) printf(" *");
			else printf(" %d", vetor[prox(r)].num);
			printf("\n");
			
			vetor[ant(l)].prox = vetor[prox(r)].num;
			vetor[prox(r)].ant  = vetor[ant(l)].num;		
		}
};

int main(){
	int b, s;
	
	while(scanf("%d %d", &s, &b) == 2 && (b!=0 || s!=0)){
		lista l(s);		
		while(b--){
			int i,j;
			scanf("%d %d", &i, &j);
			l.remove(i, j);		
		}printf("-\n");	
	}
	return 0;
}
