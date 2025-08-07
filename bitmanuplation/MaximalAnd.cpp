#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>count(31,0),arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<31;j++){
            if(arr[i]&(1<<j))
            count[j]++;
        }
    }
    long long ans=0;
    for(int i=30;i>=0;i--){
        if(n-count[i]<=k){
            ans+=(1<<i);
            k-=n-count[i];
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}