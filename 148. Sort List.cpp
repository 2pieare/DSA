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
    ListNode* mergelist(ListNode* l1, ListNode* l2){
        ListNode dump(0);
        ListNode* curr = &dump;
        while(l1 && l2){
            if(l1->val <= l2->val){
                curr->next = l1;
                l1 = l1->next;
            }else{
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        curr->next = l1 ? l1:l2;
        return dump.next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* slow = head, *fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second_head = slow->next;
        slow->next = nullptr;
        return mergelist(sortList(head), sortList(second_head));
    }
};
