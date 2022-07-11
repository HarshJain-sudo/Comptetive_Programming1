#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   long long int x,y;
   cin>>x>>y;
   if(x>y){
      if(x%2==0){
         long long int ans = (x*x) - y + 1;
         cout<<ans;
      }
      else{
         long long int ans = (x*x) - 2*(x-y) - (y-1);
         cout<<ans;
      }
   }
   else{
      if(y%2==0){
         long long int ans = (y*y) - 2*(y-x) - (x-1);
         cout<<ans;
      }
      else{
         long long int ans = (y*y) - x + 1;
         cout<<ans;
      }
   }
   cout<<endl;
   

}
  

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    unsigned long long int t;
    cin>>t;
    while(t--){
        solve();
    }
    // solve();
}
