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
    ListNode* reverseKGroup(ListNode* head, int k) {
    
         
         int n = 0;
        ListNode *curr = head,*prev,*next_node, *start_prev,*start_curr;
        while(curr!=NULL)
        {
            n++;
            curr=curr->next;
        }
        n=n/k;
        curr=head;
        
        for(int i=0;i<n;i++){
            
            prev=NULL;//for every segment prev is null
            start_curr=curr;//track the starting node of every segment
            for(int j=0;j<k;j++)
            {
                next_node=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next_node;
            }
            
            if(i==0)//our head node changes here
            {
                head=prev;
            }
            if(i>0)//connect two consecutive segments
            {
                start_prev->next=prev;
                start_prev=start_curr;
            }
            
            start_prev=start_curr;
            
        }
        start_prev->next=curr;//last segment node must have next node
        return head;
    }   
        
        
        
        
};
