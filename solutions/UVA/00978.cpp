#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

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
    int tc;

    scanf("%d", &tc);
    bool first = true;

    while(tc--){
        int b, u, sg, sb;
        multiset<int> green, blue;
        stack<int> sgreen, sblue;

        scanf("%d %d %d", &b, &sg, &sb);

        fori(i, 0, sg){
            scanf("%d", &u);
            green.insert(u);
        }

        fori(i, 0, sb){
            scanf("%d", &u);
            blue.insert(u);
        }

        while(!blue.empty() && !green.empty()){
            auto it_g = green.end(); it_g--;
            auto it_b = blue.end(); it_b--;
            int sz_b = blue.size(), sz_g = green.size();

            fori(i, 0, b){
                if(!green.empty() && !blue.empty()){
                    if((*it_g) < (*it_b)) sblue.push((*it_b) - (*it_g));
                    else if((*it_g) > (*it_b)) sgreen.push((*it_g)-(*it_b));

                    blue.erase(it_b);
                    green.erase(it_g);

                    if(!green.empty()){it_g = green.end(); it_g--;}
                    if(!blue.empty()){ it_b = blue.end(); it_b--;}
                }
            }

            while(!sgreen.empty()){
                green.insert(sgreen.top());
                sgreen.pop();
            }

            while(!sblue.empty()){
                blue.insert(sblue.top());
                sblue.pop();
            }
        }

        if(!first) printf("\n");
        first = false;

        if(green.empty() && blue.empty()) printf("green and blue died\n");

        else if(!green.empty()){
            printf("green wins\n");
            auto it = green.end(); it--;
            fori(i, 0, green.size()){
                printf("%d\n", *it); it--;
            }

        }else{
            printf("blue wins\n");
            auto it = blue.end(); it--;
            fori(i, 0, blue.size()){
                printf("%d\n", *it); it--;
            }
        }
    }

	return 0;
}
