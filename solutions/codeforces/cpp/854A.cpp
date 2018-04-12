#include <bits/stdc++.h>
#define MAX 1010

using namespace std;


bool coprim(int u, int v){
    while(v!= 0){
        int r = u % v;
        u = v;
        v = r;
    }
    return u == 1;
}

int main(){
    int a = 0, b = 0, n;

    cin >> n;
    for(int p = 1; p < MAX; p++){
        for(int q = 1; q < MAX; q++){
            if(p != q and coprim(p, q)){
                if(p + q == n and (p > a or q > b) and p < q){
                    a = p; b = q;
                }
            }
        }
    }
    printf("%d %d", a, b);

}