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

    int n;

    while(scanf("%d", &n) == 1){
        int m, l, marcos[105][105], leo[105][105];
        scanf("%d %d", &m, &l);

        fori(i, 1, m+1) fori(j, 1, n+1) scanf("%d", &marcos[i][j]);
        fori(i, 1, l+1) fori(j, 1, n+1) scanf("%d", &leo[i][j]);

        int cm, cl, a;
        scanf("%d %d %d", &cm, &cl, &a);

        if(marcos[cm][a] > leo[cl][a]) printf("Marcos\n");
        else if(marcos[cm][a] == leo[cl][a]) printf("Empate\n");
        else printf("Leonardo\n");
    }

    return 0;
}
