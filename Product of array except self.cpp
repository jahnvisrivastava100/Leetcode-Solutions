class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product =1,i,j;
        int len = size(nums);
        vector<int>r(len,1);
        vector<int>l(len,1);
        vector<int>p(len,0);
        l[0]=1;
        r[len-1]=1;
        for(i=1;i<len;i++){
            l[i]=l[i-1]*nums[i-1];//we are filling the array with left product
        }
        for(i=len-2;i>=0;i--){
            
            r[i]=r[i+1]*nums[i+1];//we are filling the array with right product
        }
    
        for(i=0;i<len;i++){
            p[i]= r[i] *l[i];
        }
        return p;
    }
};
