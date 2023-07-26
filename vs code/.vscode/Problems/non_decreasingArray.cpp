class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        if(n <1){
            return true;
        }
        bool warn = false;
        bool ans = true;
        if(nums[1] - nums[0] < 0){
                nums[0] = nums[1];
                warn = true;
            }
        for(int i = 1; i<n-1 ; i++){
            if((nums[i+1] - nums[i] < 0 || nums[i] - nums[i-1] < 0) && warn == true ){
                ans = false;
                break;
            }
            else if(nums[i+1] - nums[i] < 0){
                nums[i+1] = nums[i];
                warn = true;
            }
            else if(nums[i] - nums[i-1] < 0 ){
                warn = true;
                nums[i] = nums[i-1];
            }
        }
        return ans;
    }
};