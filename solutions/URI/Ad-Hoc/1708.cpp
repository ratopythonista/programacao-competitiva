#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, dif, ans = 1;

    scanf("%d %d", &x, &y);

    dif = y-x;

    int i = 0;
    while(i < x){
        i += dif;
        ans++;
    }
    printf("%d\n", ans);


    return 0;
}
