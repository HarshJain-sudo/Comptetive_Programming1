
#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        if(arr[0]==0){
            int count=0;
            for(int i=0;i<n;i++){
                if(arr[i]!=0)count++;

            }
            cout<<count<<endl;
        }
        else if(mp.size()==n)cout<<n+1<<endl;
        else cout<<n<<endl;

    }

}
