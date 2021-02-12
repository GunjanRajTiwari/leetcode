// Reverse bits

class Solution
{
public:
  uint32_t reverseBits(uint32_t n)
  {
    uint32_t ans = 0;
    int a = 31;
    while (n)
    {
      ans ^= (n & 1) << a;
      n = n >> 1;
      --a;
    }
    return ans;
  }
};