#include<bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define fori(a, l, f) for(int (a) = l; (a)<f; ++(a))
#define ford(a, l, f) for(int (a) = l; (a)>=f; --(a))
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
char p[100][5];
int v[5];

void aux(){
    char s[] = {'*', '+', '-'};
    int pos = 0;
    fori(i, 0, 3)
        fori(j, 0, 3)
            fori(k, 0, 3)
                fori(l, 0, 3){
                    p[pos][0] = s[i];
                    p[pos][1] = s[j];
                    p[pos][2] = s[k];
                    p[pos][3] = s[l%3];
                    pos++;
                }
}

bool solve(){
    int value = 0;
    fori(i, 0, 81){
        value = v[0];
        fori(j, 1, 5){
            char c = p[i][j-1];
            if(c == '*')value = value*v[j];
            else if(c=='+') value += v[j];
            else value -= v[j];
        }
        if(value == 23) return true;
    }
    return false;
}


int main(){

    aux();

    while(true){
        fori(i, 0, 5) scanf("%d", &v[i]);
        if(v[0] == 0) break;
        sort(v, v+5);
        bool flag = false;
        do{
            if(solve()){
                flag = true;
                printf("Possible\n");
                break;
            }
        }while(next_permutation(v, v+5));

        if(!flag) printf("Impossible\n");
    }

    return 0;
}
