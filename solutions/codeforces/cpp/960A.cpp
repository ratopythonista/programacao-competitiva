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

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int>    vi;
typedef vector<ii>    vii;
typedef vector<iii>  viii;
///////////////////////////////////////////////////////////////////////////////

int main(){
	char s[5005];
	int sz, a=0, b=0, c=0;
	
	scanf("%s", s);
	sz = strlen(s);	
	
	fori(j, 0, sz){
		if(s[j] == 'a') a++;
		if(s[j] == 'b') b++;
		if(s[j] == 'c') c++;		
	}	
	

	if(c != a && c != b){
		printf("NO\n");
		return 0;
	}
	
	int i = 0;
	bool flag = false;
	while(i<sz && s[i] ==  'a'){
		i++;	
		flag = true;
	}
	if(!flag){
		printf("NO\n");
		return 0;
	}	
	
	flag = false;
	while(i<sz && s[i] == 'b'){
		flag = true;
		i++;		
	}
	
	if(!flag){
		printf("NO\n");
		return 0;
	}	
	
	while(i<sz && s[i] == 'c') i++;
	if(i != sz){
		printf("NO\n");
		return 0;
	}
	
	
	printf("YES\n");	
	
	return 0;
}

