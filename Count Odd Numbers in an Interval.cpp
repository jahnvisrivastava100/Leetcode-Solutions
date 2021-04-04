class Solution {
public:
   /* int countOdds(int low, int high) {
        
        int c=0;
        for(int i=low;i<=high;i++){
            if(i%2!=0){
              c++;
            }
        }
      return c;  
    }
};*/
     int countOdds(int low, int high) {
        int ans=(high-low)/2;
         if(high%2!=0||low%2!=0){
             ans++;
         }
         return ans;
     }
};
