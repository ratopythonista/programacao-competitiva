#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, aux, quant1=0, quant0 = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &aux);
        if(aux==0) quant0++;
        else quant1++;
    }
    printf(quant1<quant0? "Y\n":"N\n");
    return 0;
}
