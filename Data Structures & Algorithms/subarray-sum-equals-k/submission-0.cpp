class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum =0, count =0;
        for(int l=0; l<n; l++){
         sum+=nums[l];
         int z = sum-k;
         if(mp.find(z)!=mp.end()){
            count += mp[z];
         }
         mp[sum]++;
        }
        return count;
    }
};