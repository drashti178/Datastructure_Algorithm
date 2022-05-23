#include<bits/stdc++.h>
#include<math.h>

using namespace std;
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution {
public:
    ListNode* firstPoint(ListNode *head) {
        if(head == NULL || head->next==NULL)
            return NULL;
        ListNode* fast=head;
        ListNode* slow = head;
        ListNode* entry = head;
        while(fast->next && fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                while(entry != slow)
                {
                    entry=entry->next;
                    slow=slow->next;
                    if(entry == slow)
                    {
                        return entry;
                    }
                }
            }
               
        }
        return NULL;
    }
};