// Sort Colors

class Solution
{
public:
  void swap(vector<int> &nums, int a, int b)
  {
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
  }
  void sortColors(vector<int> &nums)
  {
    int l = 0, r = nums.size() - 1, i = 0;
    while (i <= r)
    {
      if (nums[i] == 0)
      {
        swap(nums, i, l);
        ++l;
        ++i;
      }
      else if (nums[i] == 2)
      {
        swap(nums, i, r);
        --r;
      }
      else
      {
        ++i;
      }
    }
  }
};