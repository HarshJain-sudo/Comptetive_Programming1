#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long>neg,pos,zero;
    for(int  i =0;i<n;i++){
        int x;cin>>x;
        if(x<0)neg.push_back(x);
        else if(x>0)pos.push_back(x);
        else{
            if(zero.size()<2){
                zero.push_back(x);
            } 
        }
    }
    if(pos.size()>2 || neg.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    else{
        for(auto x : pos)zero.push_back(x);
        for(auto x : neg)zero.push_back(x);
            bool ok = false;
         for(int i =0;i<zero.size();i++){
            for(int j = i+1;j<zero.size();j++){
                for(int k = j+1;k<zero.size();k++){
                    ok = false;
                    int y = zero[i] + zero[j] + zero[k];
                    for(int l =0;l<zero.size();l++){
                        if(y==zero[l])ok = true;
                    }
                    if(!ok){
                        cout<<"NO"<<endl;
                        return;
                    }

                }
            }
         }
         cout<<"YES"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
