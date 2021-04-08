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
    ListNode* oddEvenList(ListNode* head) {
         if (!head) return head;
        ListNode* odd=head;
        ListNode* even_n=head->next;
        ListNode* even=head->next;
        while(odd->next && even->next){
            odd->next=odd->next->next;
            even->next=even->next->next;
           
            even=even->next;
             odd=odd->next;
        }
        odd->next=even_n;
        return head;
}
};
