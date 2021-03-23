class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
       int top=0,right=size(m[0])-1;
        vector<int>s;
        int bot=m.size()-1,left=0;
        int d=0;
        while(top<=bot && right>=left){
            if(d==0){
                for(int i=left;i<=right;i++){
                s.push_back(m[top][i]);
                }
                top++;
            }
            else if(d==1){
               for(int i=top;i<=bot;i++){
                s.push_back(m[i][right]);
                } 
                right--;
            }
            else if(d==2){
                for(int i=right;i>=left;i--){
                    s.push_back(m[bot][i]);
                }
                bot--;
                
            }
            else if(d==3){
                for(int i=bot;i>=top;i--){
                    s.push_back(m[i][left]);
                }
                left++;
            }
            d=(d+1)%4;
        }
        return s;
    }
};
