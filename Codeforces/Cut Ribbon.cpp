#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   int n;
   cin>>n;
   int x,y,z;
   cin>>x>>y>>z;
   int ans =0;
   for(int i =0;i*x<=n;i++){
    for(int j = 0;i*x + j*y<=n;j++){
        int k = (n-(i*x)-(j*y))/z;
        if(i*x + j*y + k*z == n){
            ans = max(ans,i+j+k);
        }
    }
   }
  
   cout<<ans<<endl;

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
