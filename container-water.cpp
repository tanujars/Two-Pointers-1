class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int high = n-1;
        int low = 0;
        int maxArea = 0;
        while(low <= high){
            maxArea = max(min(height[high], height[low]) * (high-low), maxArea);
            if(height[low] <= height[high]){
                low++;
            }
            else {high--;}
        }
        return maxArea;
    }
};

// Time complexity : O(n)
// Space complexity : O(1)