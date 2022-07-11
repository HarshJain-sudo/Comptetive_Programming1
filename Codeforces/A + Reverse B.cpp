#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
    unsigned long long int a,b;cin>>a>>b;
   unsigned long long int num =0;
    while(b>0){
        int x =  b%10;
        num = num*10 + x;
        b/=10;
    }
    cout<<a+num<<endl;
    

    
   return;
   
}
int main() {
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
