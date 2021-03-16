class Solution {
public:
    int maxProfit(vector<int>& prices) {
        unordered_map<int,int>m;
        int min=10000,best_profit=0;
        
        for(int i=0;i<prices.size();i++){
           if (prices[i]<min){
               min =  prices[i];
              
           }
            else if(best_profit < (prices[i]-min) )
                best_profit=prices[i]-min;
            
        }
        
       return best_profit; 
    }
};
