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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = head;
        ListNode* nextpos = dummy;
        int tempsum = 0;
        while(temp!=nullptr){
            if(temp->val != 0){
                tempsum += temp->val;
            }else{
                ListNode* n = new ListNode(tempsum);
                nextpos->next = n;
                nextpos = nextpos->next;
                tempsum = 0;
            }
            temp=temp->next;
        }
        return dummy->next->next;
    }
};
