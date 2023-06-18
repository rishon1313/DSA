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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /*
        ---Iterative approach---
        since its sorted create a dummy node 0
        create a temp pointer to dummy
        loop through list1 && list2
            join the next pointers based on sorted values
        if headA remains, join temp next to headA and similar for headB
        return dummy->next as our head
        */
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        ListNode* headA = list1;
        ListNode* headB = list2;
        while(headA && headB)
        {
            if(headA->val <= headB->val)
            {
                temp->next = headA;
                headA=headA->next;
                temp=temp->next;
            }

            else
            {
                temp->next = headB;
                headB=headB->next;
                temp=temp->next;
            }

        }
        if(headA) temp->next=headA;
        if(headB) temp->next=headB;
        return dummy->next;
    }
};
