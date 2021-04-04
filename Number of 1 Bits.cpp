class Solution {
public:
  //--First Approach--
	int hammingWeight(uint32_t n) {
       int count = 0;
		while(n != 0){
			if(n&1){
                count++;
            }
			n>>=1;
		}
		return count;
	}
  /*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
 // ---Second Approach----
  class Solution {
  public:
	int hammingWeight(uint32_t n) {
    
        int count=0;
        while(n!=0){
            n=n&(n-1);
            count++;
        }
        return count;
    }
};
