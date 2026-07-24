class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // A-1: using two nested loops
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};

        // A-2: using hashmaps
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
