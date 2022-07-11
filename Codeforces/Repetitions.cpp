 #include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   string s;
    cin >> s;

    int result = 1;
    int i = 0;

    while(i < s.size()-1){
        int count = 1;

        while(s[i] == s[i+1]){
            count++;
            i++;
        }
        result = max(result, count);
        i++;
    }

    cout << result;
}




