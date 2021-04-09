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
      ListNode* insert( int val, ListNode* head ){
        ListNode* temp = new ListNode(val);
        temp->next = head;
        return temp;
    }
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev=NULL;
        ListNode *next;
        while(head!=NULL)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);ListNode *a = l1;
        l2 = reverse(l2);ListNode *b = l2;
        ListNode *l3=NULL;
        int carry=0;
        while(a && b)
        {
            int sum=0;
            sum+=(a->val+b->val+carry);
            carry=sum/10;
            sum=sum%10;
            
            l3=insert(sum,l3); 
            a=a->next;
            b=b->next;
        }
        while(a !=NULL)
        {
            int sum=0;
            sum+=(a->val+carry);
            carry=sum/10;
            sum=sum%10;
            l3=insert(sum,l3);
            a=a->next;
        }
         while(b!=NULL)
        {
            int sum=0;
            sum+=(b->val+carry);
            carry=sum/10;
            sum=sum%10;
            l3=insert(sum,l3);
            b=b->next; 
        }
        if(carry>0)
        {
            l3=insert(carry,l3);
        }        
        return l3;
    }
};
