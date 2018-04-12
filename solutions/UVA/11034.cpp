#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int tc;

    cin>>tc;
    while(tc--){
        int l, m;
        cin>>l>>m;
        queue<int> left, right;
        l*=100;

        while(m--){
            int sz;
            string s;
            cin>>sz>>s;
            if(s == "left") left.push(sz);
            else right.push(sz);
        }

        int ans = 0;

        while(!left.empty() || !right.empty()){
            if(ans%2==0){
                int cap = 0;
                while(!left.empty() && cap+left.front() <= l){
                    cap += left.front();
                    left.pop();
                }
            }else{
                int cap = 0;
                while(!right.empty() && cap+right.front( )<= l){
                    cap += right.front();
                    right.pop();
                }
            }
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}

