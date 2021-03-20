class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& I, vector<int>& nI) {
        
       vector<vector<int>>res;
        int i=0, n =size(I);
        while(i<n && I[i][1] < nI[0] ){//for non overlaping cases
            res.push_back(I[i]);
        i++;
        }
         
       vector<int>mI=nI;
        while(i<n && I[i][0] <= mI[1]){//for overlaping intervals 
            mI[0]=min(I[i][0],mI[0]);
            mI[1]=max(I[i][1],mI[1]);
            
            i++;
        }
        res.push_back(mI);
        
        while(i<n){
             res.push_back(I[i]);
        i++;
        }
        return res;
    }
};
