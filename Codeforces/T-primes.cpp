#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   int n ;
   cin>>n;
   for(int i =0;i<n;i++){
    long long int x;
    cin>>x;
    if(x==1)cout<<"NO"<<endl;
    else if(ceil(sqrt(x))==floor(sqrt(x))){
        bool ok = true;
        int y = sqrt(x);
        for(int i =2;i<=sqrt(y);i++){
            if(x%i==0){
                ok = false;
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
  
}
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    unsigned long long int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
}
