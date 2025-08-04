class Solution {
public:
    void solve(int idx,int k,int n,vector<int>&arr,vector<vector<int>>&ans){
        if(arr.size()>=k){
            if(n==0){
                ans.push_back(arr);
            }
            return;
        }
        for(int i=idx;i<=9;i++){
            arr.push_back(i);
            solve(i+1,k,n-i,arr,ans);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr;
        vector<vector<int>>ans;
        solve(1,k,n,arr,ans);
        return ans;
    }
};