#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int case1=0,case2=0;
    for(int i=0;i<n-2;i++){
        case1^=i;
        case2^=(i+1);
    }
    if(case1!=0){
        long long secondLast=(1LL<<31)-1;
        for(int i=0;i<n-2;i++){
            cout<<i<<" ";
        }
        case1^=secondLast;
        cout<<secondLast<<" "<<case1<<endl;
    }else{
        long long secondLast=(1LL<<31)-1;
        for(int i=0;i<n-2;i++){
            cout<<i+1<<" ";
        }
        case2^=secondLast;
        cout<<secondLast<<" "<<case2<<endl;
    }
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