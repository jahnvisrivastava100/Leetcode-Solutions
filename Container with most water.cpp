


/*--------------------------------brute Force-------------
*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int temp ;
        int ans=INT_MIN ;
        // int a ;
        for(int i=0 ; i<=height.size()-2 ;i++){
            for(int j =i ;j<=height.size()-1 ;j++){
                temp=min(height[i] ,height[j])*(j-i);
                // temp=a*(j-i);
                ans =max(ans , temp);
            }
        }
            
       return ans ; 
    }
};
*/
//Two pointer approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;//only positive
        int r=height.size()-1;
        int l=0;
        while(l<r){
            max_water=max(max_water, (min(height[l],height[r])*(r-l)));
            if(height[l]<=height[r]){
                l++;
            }
             else if (height[r]<=height[l])
                r--;
            
        }
        return max_water;
    }
};
