#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long int  n,m;
    cin>>n>>m;
    vector<vector<int>>arr(m,vector<int>(2));
    for(int i =0;i<m;i++){
      cin>>arr[i][0]>>arr[i][1];
    }
     for(int i =0;i<m;i++){
      swap(arr[i][0],arr[i][1]);
    }

    sort(arr.begin(),arr.end());
    // for(int i =0;i<m;i++){
    //    cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    // }
    // cout<<endl; 
    long long int ans =0;
    // n = 7
    for(int i=m-1;i>=0;i--){
      if(n<=arr[i][1]){
        ans = ans + n*arr[i][0];
        break;
      }
      else{
        ans = ans + arr[i][0]*arr[i][1];
        n-=arr[i][1];
      }
    }
    cout<<ans<<endl;
    return 0;
}