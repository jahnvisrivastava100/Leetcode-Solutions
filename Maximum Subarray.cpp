class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*we will maintain current sum and max sum
        if cumulative sum at any -ve number evaluates to -ve then we set the
        curr sem as 0 because (ye -ve sum aage value ko decrease hi krega)
        [Since in the given question it is said that we need to have atleast one element in           the array ]=>we cannot have empty subarray
        therefore  if all the elements are -ve then we cannot return 0 we have to return       
        highest among those negative 
        
        How we will know if the array is toatally negative?
        we come to know this if the max element is -ve (so the entire array will be -ve)*/
        int cur=0,max=0;
        if (*max_element(nums.begin(),nums.end()) < 0)
            return *max_element(nums.begin(),nums.end()) ;
         for (int i=0;i<size(nums);i++) {
             cur=cur+nums[i];
             if(cur > max){
                 max =cur;
             }
             if(cur<0){
                 cur=0;
             }
         }      
       return max;     
        
    }
};
