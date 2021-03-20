class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& I) {
    
        sort(I.begin(),I.end(),[](vector<int> &a,vector<int> & b){
            return a[0] < b[0];
        });
        int ans=0;
        int prev=0;
        int n=size(I);
        for(int i=1;i<n;i++){
            if(I[prev][1]>I[i][0] && I[prev][1] >= I[i][1])
            {
                ans++;
                prev =i;
            }
            else if(I[prev][1]>I[i][0] && I[prev][1]<I[i][1]){
                ans++;
            }
            else{
                prev=i;
            }
        }
        return ans;
    }
};
