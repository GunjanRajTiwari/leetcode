// Replace Elements with Greatest Element on Right Side

class Solution
{
public:
  vector<int> replaceElements(vector<int> &arr)
  {
    int m = -1, n = -1;
    int l = arr.size();
    for (int i = l - 1; i >= 0; i--)
    {
      n = max(n, arr[i]);
      arr[i] = m;
      m = n;
    }
    return arr;
  }
};