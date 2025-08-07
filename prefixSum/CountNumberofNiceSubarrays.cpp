class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int & it:nums){
            it=it&1;
        }
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        map<int,int>mp;
        int ans=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(mp[nums[i]-k]!=0)
            ans+=mp[nums[i]-k];
            mp[nums[i]]++;
        }
        return ans;
    }
};