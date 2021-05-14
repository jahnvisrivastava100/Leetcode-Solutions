class Solution {
public:
   vector<int>par;
    int count;
    int  find(int n ){
        if(n == par[n] ){
            return n;
        }
        else{
            return find(par[n]);
        }
    }
    
    
    
    void unions(int a, int b){
     //two values of set
     a = find(a);//we will find their parent
     b = find(b);//we will find their parent
     if(a == b)//both belong to same set
       { 
	     return;//coz union not possible
	
        }
    else{
	   par[a]=b;
       count--;
	
     }
     }
    
    int findCircleNum(vector<vector<int>>& C) {
        int n = C.size();
         par.resize(n);
         count = n;
        for(int i =0;i < n;i++){
            par[i]=i;
        }
        // we will use union find algorithm
        
        for(int i = 0 ; i < n ;i++){
            for(int j = i+1; j < n;j++){//because undirected graph
                if(C[i][j]==1){
                        unions(i,j);
                    }
                }
            }
        return count;
        }
    
        
    
};
