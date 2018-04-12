
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
    freopen("in.txt", "r", stdin);
    int n, tc = 1;

    while(scanf("%d", &n) && n!=0){
        map<char, pair<int, int>> dict;
        int t = (1<<10) - 1;
        int bitmask[] = {t, t, t, t, t, t};

        while(n--){

            for(char i='A'; i<='E'; i++){
                int a, b;
                scanf("%d %d", &a, &b);
                dict[i].first  = a;
                dict[i].second = b;
            }

            for(int i=0; i<6; i++){
                char c;
                int aux = 0;
                scanf(" %c", &c);
                aux = aux | (1<<dict[c].first);
                aux = aux | (1<<dict[c].second);
                bitmask[i] = bitmask[i] & aux;
            }

        }

        printf("Teste %d\n", tc++);

        for(int i=0; i<6; i++){
            for(int j=0; j<10; j++){
                if((bitmask[i] & (1<<j)) != 0) printf("%d ", j);
            }
        }
        printf("\n\n");

    }

    return 0;
}
