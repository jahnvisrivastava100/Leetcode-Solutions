class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++){
              swap(m[i][j], m[j][i]);
            }
        }
          for (auto& row: m) 
              reverse(row.begin(), row.end());
    }
    };
   //     //reverse
//     i   m
//     1 4 7    3/2=1.5 -->1
//     7 4 1
//     i     m
//     1 2 3 4
//     4 3 2 1
        
//     m=n-1;
//     for(i=0;i<n/2;i++)
//     {
//       swap(ar[m],ar[i]);
//         m--;
//     }
    
//     };
// TRANSPOSE
// |1 2 3|        |1 4 7|       |7 4 1|
// |4 5 6|------> |2 5 8|-----> |8 5 2|
// |7 8 9|        |3 6 9|       |9 6 3|
    

// iteration 1:
// i = 0
// j = 0
// j = 0 ----->N(3)
//     swap(1,1)
//     swap(2,4)
//     swap(7,5)
    

   
