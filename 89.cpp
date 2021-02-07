// Gray Code

class Solution
{
public:
  vector<int> grayCode(int n)
  {
    int x = pow(2, n), i;
    vector<int> ans(x);
    for (i = 0; i < x; i++)
      ans[i] = i ^ (i >> 1);
    return ans;
  }
};