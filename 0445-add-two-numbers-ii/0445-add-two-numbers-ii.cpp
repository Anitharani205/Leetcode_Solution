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
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=nullptr;
        ListNode* curr = head;
        while(curr)
        {
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    ListNode* add(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* current = dummy;
        int carry=0;
        while(l1 || l2 || carry)
        {
            int sum=carry;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            current->next=new ListNode(sum%10);
            current=current->next;
        }
        return dummy->next;
    }
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2)
    {
         l1=reverse(l1);
         l2 = reverse(l2);
        ListNode* result=add(l1,l2);
        return reverse(result);
    }
};