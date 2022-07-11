#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int>arr(n);
    int maxi = INT_MIN;
    for(int i =0;i<n;i++)cin>>arr[i];
    for(int i =0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
}