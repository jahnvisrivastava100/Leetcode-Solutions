
/*Input----------------------------[[1,3],[2,6],[8,10],[15,18]]
ans=[[1,3]]
                                Dry Run Implementation
                                at i=1,j=0
                                3>=2----true
                                curr=[1,max(3,6)]=>[1,6]
                                ans=[[1,6]]

                                at i=2,j=0
                                6>=8----False
                                curr=[8,10]
                                ans=[[1,6],[8,10]]

                                at i=3,j=1
                                10>=15-----False
                                curr=[15,18]
                                ans=[[1,6],[8,10],[15,18]]



return ans

Output-----------------------------[[1,6],[8,10],[15,18]]
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& I) {
        sort(I.begin(),I.end(),[](vector<int> &a,vector<int> & b){
            return a[0] < b[0];
        });
        vector<vector<int>> ans;
        ans.push_back({I[0][0],I[0][1]});
        int j = 0;
        for(int i = 1; i < I.size(); i++){
            // check whether i and j are converging.
            vector<int> curr;
            if(ans[j][1] >= I[i][0]){
                // merge
                
                curr.push_back(ans[j][0]);
                curr.push_back(max(I[i][1],ans[j][1]));
                ans.pop_back();
                
            }
            else{
                curr.push_back(I[i][0]);
                curr.push_back(I[i][1]);
                j++;
            }
            
            ans.push_back(curr);
        }
        
        return ans;
    }
};
