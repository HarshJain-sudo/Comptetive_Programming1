 #include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     int a,b;
     cin>>a>>b;
     int ans = gcd(a,b);
     cout<<ans<<endl;
}




