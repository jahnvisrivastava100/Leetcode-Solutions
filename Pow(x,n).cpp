class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long int nn=n;
        if(n==0){
            return 1;
        }
        if(n<0){
            nn=-1*nn;
        }
        while(nn!=0){
            if(nn%2 == 0){
                x=x*x;
                nn=nn/2;
            }
            else{
               ans=ans*x;
                nn=nn-1;
            }
        }
        if(n<0){
            ans=(double)1.0/(double)ans;
        }
        return ans;
    }
};
    /*suppose we have input(2,6)
    6%2==0
    x=2*2---------n=6/2=3
    3%2!=0
    ans=4---------n=2
    2%2==0
    x=4*4--------n=1
    1%2!=0
    ans=4*4*4-----n=0
   Time  Complexity=O(logn)*/
    
