#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
    int n;
    cin>>n;
    vector<bool>visited(n,false);
    cout<<"2"<<endl;
    vector<int>ans;
    ans.push_back(1);
    int prev =1;
    visited[0]=true;
    cout<<"1"<<" ";
    for(int i = 2;i<=n;i++){
      if(2*prev <=n){
        prev = 2*prev;
        // cout<<prev<<" ";
        ans.push_back(prev);
        visited[prev-1]=true;
      }
    }
    reverse(ans.begin(),ans.end());
    for(int i =0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
    for(int i =0;i<visited.size();i++){
      if(!visited[i]){
        cout<<i+1<<" ";
      }
    }
    cout<<endl;

   return ;
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
