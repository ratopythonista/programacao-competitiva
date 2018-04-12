#include<bits/stdc++.h>
#define oo 1000000

using namespace std;
vector<int> soldados;


int main(){
    int qtd;
    cin >> qtd;
    for(int i= 0; i < qtd; i++){
        int altura;
        cin >> altura;
        soldados.push_back(altura);
    }
    soldados.push_back(soldados.front());
    int menor = oo;
    int a, b;
    for(int i = 0; i < qtd; i++){
        if( abs(soldados[i] - soldados[i+1]) < menor){
            a = i; b = i+1;
            menor = abs(soldados[i] - soldados[i+1]);
        }
    }
    cout << (a+1) << ' ' << (b+1>qtd?1:b+1) << endl;
}