class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=size(nums);
        if(n==1&&nums[0]==target)
            return 0;
        int lb=0;
        int ub=n-1,mid;
        while(ub>=lb){
            mid=lb+(ub-lb)/2;
            if(nums[mid]==target){
                return mid;
            }
        //rotation exist
          if (nums[mid] > nums[ub]) {
                if (target < nums[mid] && target >= nums[lb])
                    ub = mid - 1;
                else
                    lb = mid + 1;
            }
            //rotation exist
        else if(nums[mid] < nums[lb]){
            if (target > nums[mid] && target <= nums[ub])
                    lb = mid + 1;
                else
                    ub = mid - 1;
            }
        // rotation do not exist
        else{
            if(target > nums[mid]){
                lb=mid+1;
            }
            else if (target < nums[mid]){
                ub=mid-1;
            }
                
        }
        }
        return -1;
    }
};
