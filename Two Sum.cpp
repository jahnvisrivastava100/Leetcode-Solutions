class Solution {
public:
  /*Here i am creating a hash map which has key a the value of input vector and key value as the index of the the value in vector(since we are suppose to search for index)*/
  
    
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>k(2,0);
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!= m.end())
            {
                k[0]=i;
                k[1]=m[target-nums[i]];
                return k;
            }
            else{
                m[nums[i]]=i;
            }
        }
        return k;
        
    }
};
