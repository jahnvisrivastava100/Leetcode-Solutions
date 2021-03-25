/*'Brute For prefix sum      for(int i = 0; i< height.length; i++){
                                left[i] = height[i];
                                for(int j = i-1; j>=0; j--){
                                     if(left[i]> height[j]){

                                     }else{
                                         left[i] = height[j];      
                                     }

                                }
                            }

                            return left;
                        }
    */

//Solution 1---------Array approach
class Solution {
public:
    int trap(vector<int>& arr) {
     
    int n=arr.size();
        
    if(n==0) return 0;
        
    int left[n],right[n];
    
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    
    int water=0;
    
    for(int i=1;i<n;i++)
        left[i]=max(left[i-1],arr[i]);
    
    for(int i=n-2;i>=0;i--)
        right[i]=max(arr[i],right[i+1]);
    
    for(int i=1;i<n-1;i++)
        water+=min(left[i],right[i])-arr[i];
        
    return water;
    }
};
