class Solution {
public:
    void solve(int idx,int n,vector<int>&arr,vector<vector<int>>&ans,vector<int>& nums){
        ans.push_back(arr);// this handles not take
        for(int i=idx;i<n;i++){
            if(i>idx && nums[i-1]==nums[i])continue;
            arr.push_back(nums[i]);
            solve(i+1,n,arr,ans,nums);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        solve(0,n,arr,ans,nums);
        return ans;
    }
};