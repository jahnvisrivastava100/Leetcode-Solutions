class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>countBits(num+1,0);//here I am passing num+1 bcz given range is [0,num]
            for(int i=0;i<=num;i++){
                countBits[i]= countBits[i>>1]+i%2;
            }
        return  countBits;
    }
};
