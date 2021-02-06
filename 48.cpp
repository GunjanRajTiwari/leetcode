// Rotate Image

class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {
    int n = matrix.size();
    transpose(n, matrix);
    reverse(n, matrix);
  }
  void transpose(int n, vector<vector<int>> &mat)
  {
    int temp, i, j;
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < i; j++)
      {
        temp = mat[i][j];
        mat[i][j] = mat[j][i];
        mat[j][i] = temp;
      }
    }
  }
  void reverse(int n, vector<vector<int>> &mat)
  {
    int temp, i, j;
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n / 2; j++)
      {
        temp = mat[i][j];
        mat[i][j] = mat[i][n - j - 1];
        mat[i][n - j - 1] = temp;
      }
    }
  }
};