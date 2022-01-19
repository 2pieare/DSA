/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* s = head;
        ListNode* f = head;
        ListNode* e = head;
        
        while(f->next && f->next->next){
            f = f->next->next;
            s = s->next;
            if(f==s){
                while(s!=e){
                    s=s->next;
                    e=e->next;
                }
                return e;
            }
        }
        return NULL;
    }
};
