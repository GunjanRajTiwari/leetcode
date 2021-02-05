// Design a Stack With Increment Operation

class CustomStack
{
public:
  vector<int> stk;
  int n = 0;
  int limit;
  CustomStack(int maxSize)
  {
    limit = maxSize;
    stk.reserve(limit);
  }

  void push(int x)
  {
    if (n < limit)
    {
      stk.push_back(x);
      n++;
    }
  }

  int pop()
  {
    if (n > 0)
    {
      int top = stk[n - 1];
      n--;
      stk.pop_back();
      return top;
    }
    return -1;
  }

  void increment(int k, int val)
  {
    for (int i = 0; i < min(k, n); i++)
    {
      stk[i] += val;
    }
  }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */