// Container With Most Water

class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int i, j, temp, ans;
    i = 0;
    j = height.size() - 1;
    while (i < j)
    {
      temp = min(height[i], height[j]) * (j - i);
      if (temp > ans)
        ans = temp;
      height[i] > height[j] ? --j : ++i;
    }
    return ans;
  }
};