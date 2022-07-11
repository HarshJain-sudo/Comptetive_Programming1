 #include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long n, d = 0, count = 0;
    cin>>n;
    long long a[n];
    for (int i = 0; i<n; i++)
    cin>>a[i];
    for (int i = 0; i<n-1; i++) {
        d = 0;
        if(a[i+1]<a[i])
        {
            d = a[i] - a[i+1];
            a[i+1] = a[i];
            count = count + d;
        }
    }
    cout<<count<<endl;
}




