#include<bits/stdc++.h>		
using namespace std;									
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

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;

int main(){
	int tc;
	
	scanf("%d", &tc);
	
	while(tc--){
		int qtd, sum = 0, vetor[1050];
		
		scanf("%d", &qtd);
		fori(i, 0, qtd) scanf("%d", &vetor[i]);
		
		fori(i, 1, qtd)
			fori(j, 0, i) if(vetor[j] <= vetor[i]) sum++;	
		printf("%d\n", sum);
	
	}		
	
	return 0;
}


