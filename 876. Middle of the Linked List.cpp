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
    ListNode* middleNode(ListNode* head) {
        ListNode* traversal = head;
        int countofnodes = 0;
        while(traversal != NULL){
            traversal = traversal -> next;
            countofnodes++;
        }
        
        int mid;
        if(countofnodes%2==0)
            mid = countofnodes/2 ;
        else
            mid = countofnodes/2;

        while(mid--)
            head = head->next;
        return head;
    }
};
