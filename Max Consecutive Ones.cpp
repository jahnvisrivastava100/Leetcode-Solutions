class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& ar) {
        int n=size(ar);
        int c=0;
        int max=0;
        for(int i=0;i<n;i++){
            if(ar[i]==1)
            {
                c++;
            }
            if(c>max){
                max=c;
            }
            if(ar[i]==0){
                c=0;
            }
        }
        return max;
    }
};
