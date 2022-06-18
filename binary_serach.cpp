int findPivotElementInRotatedSortedArray(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        if(nums[l]<=nums[r])return nums[l];
        while(l<=r) {
            int m = (r+l)/2;
            if(nums[m] > nums[m+1]) return nums[m+1];
            if(nums[m] > nums[l])l=m+1;
            else r=m;
        }
        return nums[0];
}
