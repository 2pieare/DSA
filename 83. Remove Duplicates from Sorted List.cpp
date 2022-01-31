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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        
        ListNode* curr = head;
        ListNode* checker = head->next;
        while(curr != nullptr && curr->next != nullptr){
            if(curr->val == checker->val){
                curr->next = checker->next;
                checker = checker->next;
            }else{
                curr = curr->next;
                checker = checker->next;
            }
        }
        return head;
    }
};
