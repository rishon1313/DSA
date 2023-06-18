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
        ListNode* headA = list1;
        ListNode* headB = list2;
        if(!headA && !headB)
        {
            return headA;
        }
        if(headA == NULL) return headB;
        if(headB == NULL) return headA;
        if(headA->val <= headB->val)
        {
            headA->next=mergeTwoLists(headB,headA->next);
        }
        else
        {
            headB->next=mergeTwoLists(headA,headB->next);
        }
        return headA->val <= headB->val ? headA:headB;
    }
};
