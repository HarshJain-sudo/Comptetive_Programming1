 #include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     int n;
     cin>>n;
     vector<int>arr(n-1);
     for(int i =0;i<n-1;i++){
        cin>>arr[i];
     }
     sort(arr.begin(),arr.end());
     unordered_map<int,int>mp;
     for(auto x : arr ){
        mp[x]++;
     }
     for(int i =1;i<=n;i++){
          if(mp[i]==0){
            cout<<i<<endl;
            break;
          }
     }
}




