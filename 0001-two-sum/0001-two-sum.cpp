class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        for (int i =0; i < nums.size(); i++){
            for (int j= 0 ; j < nums.size(); j++ ){
                sum = nums[i]+ nums[j];
                if (sum == target && i != j){
                    return {i, j};
                }
            }
        }return {};
}
};