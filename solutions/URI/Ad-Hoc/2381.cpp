#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main() {

    vector<string> vetor;
    int n, k;
    scanf("%d %d", &n, &k);

    while(n--){
        string aux;
        cin>>aux;
        vetor.push_back(aux);
    }

    sort(vetor.begin(), vetor.end());
    cout<<vetor[k-1]<<endl;

    return 0;
}
