#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int i =0;
   int j = k-1;
   int sum = 0;
   for( i =0;i<k;i++){
        sum+=arr[i];
   }
   vector<vector<int>>ans;
   i=0;
    
    while(j<n){
        ans.push_back({sum,i+1});
        sum-=arr[i];
        i++;
        j++; 
        sum+=arr[j];
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0][1]<<endl;
}




 