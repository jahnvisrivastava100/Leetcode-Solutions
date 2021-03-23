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
   
