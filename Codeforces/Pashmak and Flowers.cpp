#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   long long int n;
   cin>>n;
   long long int arr[n];
   unordered_map<long long int,long long int>mp;
   for(int i =0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
   }
   sort(arr,arr+n);
   if(arr[0]==arr[n-1]){
    int z = (n*(n-1))/2;
    cout<<"0"<<" "<<z<<endl;
    return;
   }
   long long int ans = 0;
   long long int ans1 = arr[n-1]-arr[0];
   for(int i =0;i<n;i++){
      long long int x = ans1+arr[i];
      if(mp.count(x)>0){
          ans+=mp[x];
      }
   }
   cout<<ans1<<" "<<ans<<endl;
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
