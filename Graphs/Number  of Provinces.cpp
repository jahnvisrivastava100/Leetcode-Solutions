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


//--------------------------------Using path compression-----------------------------------------------//
//using path compression

class Solution {
public:
    vector<int>parent;
    
    int findCircleNum(vector<vector<int>>& M) {
        int i, j, groups = 0, n = M.size();
        parent.resize(n);
        make_set(n);
          
        for(i = 0; i < n; i++) {
            for(j = i + 1; j < n; j++) {
                if(M[i][j])
                    union_sets(i, j);
            }
        }
        
        for(i = 0; i < n; i++) {
            if(i == parent[i])
                groups++;
        }
        
        return groups;
    }

private:
    void make_set(int n) {
        for(int i = 0; i < n; i++) 
            parent[i] = i;
    }
    
    int find_set(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    
    void union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
            parent[b] = a;
    }
};
