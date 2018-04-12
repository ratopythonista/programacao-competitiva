#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

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

char s[100];
int sz;
double total, qtd;

double t[] = {12.53, 1.42, 4.68, 5.86, 13.68, 0.69, 1.01, 
			  0.70, 6.25, 0.44, 0.00,  4.97, 3.15, 6.71, 
			  8.68, 2.51, 0.88, 6.87, 7.98, 4.63, 3.93, 
			  0.90, 0.02, 0.22, 0.90, 0.52};
int freq[26];

char even[] = "aeiou";
char odd[]  = "bcdfghjklmnpqrstvwxyz";

void solve(int pos, double acc){
	if(pos == sz){
		total += acc;
		qtd++;
		return ;
	}
	
	if((pos+1) % 2 == 0){
		for(int i=0; i<5; i++){
			if(freq[(even[i]-'a')] < 2){
				acc += (t[(even[i]-'a')]*(pos+1));
				freq[(even[i]-'a')]++;
				solve(pos+1, acc);	
				freq[(even[i]-'a')]--;
				acc -= (t[(even[i]-'a')]*(pos+1));
			}		
		}	
	}else{
		for(int i=0; i<21; i++){
			if(freq[(odd[i]-'a')] < 2){
				acc += (t[(odd[i]-'a')]*(pos+1));
				freq[(odd[i]-'a')]++;
				solve(pos+1, acc);
				acc -= t[(odd[i]-'a')]*(pos+1);
				freq[(odd[i]-'a')]--;			
			}		
		}	
	}
}

int main(){
	int tc;
	double acc;
	
	scanf("%d", &tc);
	
	while(tc--){
		scanf("%s", s);
		sz = strlen(s);
		
		memset(freq, 0, sizeof freq);
		qtd   = 0.0;
		acc = t[(s[0] - 'a')];
		freq[(s[0]-'a')] = 1;
		total = 0.0;
		
		solve(1, acc);
		total = total/qtd;
		
		double cmp = 0.0;
		
		for(int i=0; i<sz; i++) cmp += (t[(s[i] - 'a')]*(i+1));
		
		if(total <= cmp) printf("above or equal\n");
		else printf("below\n");	
	
	}	
	
	return 0;
}
