#include<bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back 
#define fori(a, l, f) for(int a = l; a<f; ++a)
#define ford(a, l, f) for(int a=l; a>=f; --a)
#define pq priority_queue 
#define MAX 800000
using namespace std;
char S[50];


bool unique(int num){
	int mask = 0;
	
	while(num > 0){
		if((mask & (1<<(num%10))) != 0) return false;
		else mask = mask | (1 << (num%10));
		num /= 10;	
	}
	
	return true;
}


bool runAround(int num){	
	
	sprintf(S, "%d", num);	
	int sz  = strlen(S);
	int pos = (0 + int(S[0] - '0'))%sz, mask = 0;
		
	fori(i, 0, sz){
		if((mask & (1 << pos) != 0)) return false;
		mask = mask | (1 << pos);
		pos  = (pos + int(S[pos]-'0'))%sz; 		
	}
		
	return mask == ((1<<sz)-1)?true:false;	
}

  
int main(){
	int tc = 1, n, pos = 0;
	int v[MAX];
	vector<int> s(MAX);
	
	fori(i, 10, 9876543) if(unique(i)) v[pos++] = i;	
	fori(i, 0, pos) if(runAround(v[i])) s.pb(v[i]);
		
	vector<int>::iterator it;
	while(scanf("%d", &n) && n != 0){
		it = upper_bound(s.begin(), s.end(), n);		
		printf("Case %d: %d\n", tc++, *it);	
	}	

	return 0;
}
