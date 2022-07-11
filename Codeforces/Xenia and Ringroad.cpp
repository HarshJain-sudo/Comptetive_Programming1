#include<bits/stdc++.h>
using namespace std;
// #define int  int_64t;
// #define ll  long long ;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   
    int n,m;
    cin>>n>>m;
    int prev = 1;
    long long int  ans =0;
    for(int i =0;i<m;i++){
        int x;cin>>x;
        ans+=((x-prev+n)%n);
        prev = x;
    }
    cout<<ans<<endl;
    
}




 