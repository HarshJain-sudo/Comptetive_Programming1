#include <bits/stdc++.h>
using namespace std;


void solve(){
    unsigned long long int n,r,avg;
    cin>>n>>r>>avg;
    // cin>>n>>r>>avg;
    unsigned long long int sum=0;
    vector<vector<unsigned long long int>>arr(n,vector<unsigned long long int>(2));
    int i =0;
    for (i = 0; i < n; i++)
    {
        // scanf("%d%d",&a[i].second,&a[i].first);
           cin>>arr[i][1]>>arr[i][0];
           sum += arr[i][1];
    }
    sort(arr.begin(),arr.end());
    int rez = i = 0;
    while (sum < avg*n)
    {
        long long tmp = min(avg*n-sum,r-arr[i][1]);
        rez += tmp*arr[i][0];
        sum += tmp;
        i++;
    }
    // printf("%I64d\n",rez);
    cout<<rez<<endl;
    // return 0;
   return;
   
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
