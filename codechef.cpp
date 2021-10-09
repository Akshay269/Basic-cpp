#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    map<int,int>m;
    for (int i=0;i<n;i++) {
        int x;cin>>x;
        m[x]++;
    }
    int ans=n,cnt=0;
    for (auto element : m) {
        ans=min(ans,n-element.second);
        cnt++;
    }
    if(cnt>=2){
        ans=min(ans,n-2);
    cout<<ans<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
