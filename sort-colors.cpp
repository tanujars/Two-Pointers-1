class Solution {
public:
    void sortColors(vector<int>& nums) {
        if (nums.size() == 0){
            return;
        }
        int low=0, mid =0;
        int high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
            else if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else{
                mid++;
            }
        }
    }

};

// Time complexity : O(n)
// Space complexity : O(1)