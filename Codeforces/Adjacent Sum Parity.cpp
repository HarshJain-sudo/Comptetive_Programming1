#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    if(sum&1== 1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return;
   
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
