// Matrix Diagonal Sum

class Solution
{
public:
  int diagonalSum(vector<vector<int>> &mat)
  {
    int ans = 0, d = mat.size();
    for (int i = 0; i < d; i++)
    {
      ans += mat[i][i];
      if (d - i - 1 != i)
        ans += mat[d - i - 1][i];
    }
    return ans;
  }
};