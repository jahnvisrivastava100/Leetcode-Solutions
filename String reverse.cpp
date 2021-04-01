class Solution {
public:
    void rev(vector<char>& s,int l,int n){
      if(l>=n){
          return;
      }
   
     rev(s,l+1,n-1);
         swap(s[l],s[n]);
    }
    void reverseString(vector<char>& s) {
        
        rev(s,0,(size(s)-1));
    }
    
    
};
