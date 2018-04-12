#include<bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
queue<ii> criancas;

int main(){
    int qtd, doces;
    cin >> qtd >> doces;
    for(int i = 1; i <= qtd; i++){
        int dc;
        cin >> dc;
        criancas.push(ii(dc, i));
    }
    while(criancas.size() != 1){
        int dc, i;
        tie(dc, i) = criancas.front(); criancas.pop();
        if (dc - doces > 0){
            criancas.push(ii(dc-doces, i));
        }
    }
    int dc, i;
    tie(dc, i) = criancas.front();
    cout << i << endl;
}