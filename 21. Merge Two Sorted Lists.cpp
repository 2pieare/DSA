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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //if(l1 == NULL) return l2;
        //if(l2 == NULL) return l1;
        //if(l1->val > l2->val){ 
         //   std::swap(l1,l2);
        //}
        //ListNode * res = l1;
        //while(l1!=NULL && l1!=NULL){
          //  ListNode * temp = NULL;
            //while(l1 != NULL && l1->val <= l2->val){
              //  temp = l1;
                //l1=l1->next;
           // }
            //temp->next = l2;
            //std::swap(l1,l2);
        //}
        //return res;
    if(l1 == nullptr || l2 == nullptr) return l1 == nullptr ? l2 : l1 ; 
        ListNode *dummy = new ListNode(2) ;
        ListNode *dummyH = dummy ;
        ListNode *c1 , *c2 ;
        c1 = l1 , c2 = l2 ;
        while(c1!=nullptr && c2!=nullptr){
            if(c1->val <= c2->val){
                dummy->next = c1 ;
                c1 = c1->next;
            }
            else if(c1->val > c2->val){
                dummy->next = c2 ;
                c2 = c2->next;
            }
                      
            dummy = dummy->next ;
        }
         while(c1!=nullptr) {dummy->next = c1 ;  dummy = dummy->next ; c1 = c1->next;}
         while(c2!=nullptr) {dummy->next = c2 ;  dummy = dummy->next ;  c2 = c2->next;}
        
        return dummyH->next ;
    }
};
