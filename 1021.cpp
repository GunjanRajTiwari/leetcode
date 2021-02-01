// Remove outermost parentheses

class Solution
{
public:
  string removeOuterParentheses(string S)
  {
    int cnt = 0;
    string ans;
    for (auto c : S)
    {
      if (c == '(')
      {
        if (cnt++)
        {
          ans += c;
        }
      }
      else
      {
        if (--cnt)
        {
          ans += c;
        }
      }
    }
    return ans;
  }
};