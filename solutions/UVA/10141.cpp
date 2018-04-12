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

struct prop{
	double comp, price;
	int pos;
	string name;
};

bool operator < (struct prop& a, struct prop& b){
	if(a.comp > b.comp) return true;
	if(a.comp == b.comp){
		if(a.price < b.price) return true;
		if(a.price == b.price){
			if(a.pos < b.pos) return true;				
		}	
	}	
	return false;
}

int main(){

	int n, p, tc = 1;
	
	while(cin>>n>>p && n|p){
		string aux;
		vector<struct prop> v;
		cin.ignore();
		fori(i, 0, n) getline(cin, aux);
		int pos = 1;
		
		while(p--){
			struct prop pr;	
			double d;
			int r;
					
			getline(cin, aux);			
			cin>>d>>r;	
			
			pr.price = d;
			pr.pos   = pos;
			pr.name  = aux;
			pr.comp  = double(r)/double(n);			
			v.pb(pr);
			cin.ignore(); 
			while(r--)getline(cin, aux);
		}
		
		sort(v.begin(), v.end());
		
		if(tc!=1) cout<<endl;
		cout<<"RFP #"<<(tc++)<<endl;
		cout<<v[0].name<<endl;		
	}
		
	return 0;
}
