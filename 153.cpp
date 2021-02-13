// Find Minimum in rotated sorted array

class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    int mini = nums[0];
    for (int i = 1; i < nums.size(); ++i)
    {
      if (nums[i] < nums[i - 1])
      {
        mini = nums[i];
        break;
      }
    }
    return mini;
  }
};

// Binary Search

class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    int n = nums.size();
    int res = nums[0];
    int i = 0, j = n - 2, mid;
    while (i <= j)
    {
      mid = i + (j - i) / 2;
      if (nums[mid + 1] < nums[mid])
      {
        res = min(res, nums[mid + 1]);
        break;
      }
      else
      {
        if (nums[mid] >= nums[0])
          i = mid + 1;
        else
          j = mid - 1;
      }
    }

    return res;
  }
};