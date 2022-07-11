#include<bits/stdc++.h>
using namespace std;

// countting sort is a non comparision sorting technique
vector<int> CountingSort(vector<int> &arr,int k){

    vector<int>count(k+1,0);
    int n = arr.size();

//  assign frequency of all elements to count array

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

// do the operation of count[i]+=count[i-1]

    for (int i = 1; i <= k; ++i){
        count[i] += count[i - 1];
    }

 //  now implement the logic to prepare ans vector

   vector<int>ans(n);
   for (int i = 0; arr[i]; ++i) {
        ans[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }

    return ans;
}
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

     vector<int>ans1 = CountingSort(arr,k);

     for(auto x : ans1){
        cout<<x<<" ";
     }

     return 0;
     // mgnm8011

    
}