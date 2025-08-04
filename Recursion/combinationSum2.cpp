//only

class Solution {
public:
    void solve(int idx,int n,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>& candidates){
        if(idx>=n){
            if(target==0){
                ans.push_back(arr);
                return;
            }
            return;
        }
        if(target<=0){
            if(target==0)
            ans.push_back(arr);
            return;
        }
        for(int i=idx;i<n;i++){
            if(i>idx && candidates[i-1]==candidates[i]){
                continue;
            }
            arr.push_back(candidates[i]);
            solve(i+1,n,target-candidates[i],arr,ans,candidates);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>arr;
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        solve(0,n,target,arr,ans,candidates);
        return ans;
    }
};