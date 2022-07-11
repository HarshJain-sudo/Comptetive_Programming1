#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   int n ;
   cin>>n;
   unordered_map<string,int>mp;
   for(int i =0;i<n;i++){
    string s;

    cin >> s;
        if (mp.count(s) == 0)
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s] += 1;
        }
   }
   
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
