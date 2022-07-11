#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   int n ;
   cin>>n;
   vector<int>arr(n);
   int odd=0;
   int even =0;
   for(int i =0;i<n;i++){      
       cin>>arr[i];
       if(arr[i]%2==0)even++;
       else odd++;
   }
   if(odd==1){
       for(int i =0;i<n;i++){
          if(arr[i]%2==1){
            cout<<i+1<<endl;
            return ;
          }
       }
   }
   else{
       for(int i =0;i<n;i++){
          if(arr[i]%2==0){
            cout<<i+1<<endl;
            return ;
          }
       }
   }
   
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
