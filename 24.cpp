// Swap Nodes in Pairs

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *swapPairs(ListNode *head)
  {
    if (head)
      return head;
    int temp;
    ListNode *a = head;
    ListNode *b = a->next;
    while (b)
    {
      temp = a->val;
      a->val = b->val;
      b->val = temp;
      a = b->next;
      b = a ? a->next : a;
    }
    return head;
  }
};