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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        unordered_map<ListNode*, int> mp;
        
        while(a!=NULL && b!=NULL){
            mp[a]++;
            mp[b]++;
            if(mp[a]>1) return a;
            if(mp[b]>1) return b;
            a = a->next;
            b = b->next;
        }
        
        if(a==NULL){
            while(b!=NULL){
                mp[b]++;
                if(mp[b]>1) return b;
                b = b->next;
            }
        }
        
        if(b==NULL){
            while(a!=NULL){
                mp[a]++;
                if(mp[a]>1) return a;
                a = a->next;
            }
        }
        
        return nullptr;
    }
};
