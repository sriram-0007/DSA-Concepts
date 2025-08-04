// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
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
        arr.push_back(candidates[idx]);
        solve(idx,n,target-candidates[idx],arr,ans,candidates);
        arr.pop_back();
        solve(idx+1,n,target,arr,ans,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>arr;
        int n=candidates.size();
        solve(0,n,target,arr,ans,candidates);
        return ans;
    }
};