//this is bitmask solution

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<1<<n;i++){
            vector<int>arr;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    arr.push_back(nums[j]);
                }
            }
            ans.push_back(arr);
        }
        return ans;
    }
};

//this is recursion and backtracking solution

class Solution {
public:
    void sol(vector<vector<int>>& ans,vector<int>& output,vector<int> nums,int i){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        sol(ans,output,nums,i+1);
       
        output.push_back(nums[i]);
        sol(ans,output,nums,i+1);
        output.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        sol(ans,output,nums,0);
        return ans;
    }
};