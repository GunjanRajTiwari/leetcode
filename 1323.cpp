// Maximum 69 number

class Solution
{
public:
  int maximum69Number(int num)
  {
    int pos = 1, ans = 0;
    int temp = num;
    while (temp)
    {
      if (temp % 10 == 6)
        ans = 3 * pos;
      pos *= 10;
      temp /= 10;
    }
    return ans + num;
  }
};