class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head==NULL)
        return;
        Node* fast=head->next;
        Node* slow=head;
        
        while(fast!=slow)
        {
            if(fast==NULL || fast->next==NULL)
            return;
            fast=fast->next->next;
            slow=slow->next;
        }
        
        int size=1;
        fast=fast->next;
        
        while(fast!=slow)
        {
            size++;
            fast=fast->next;
        }
        slow=head;
        fast=head;
        
        for(int i=0;i<size-1;i++)
        fast=fast->next;
        
        while(fast->next!=slow)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        fast->next=NULL;
        
        // code here
        // just remove the loop without losing any nodes
    }
};


#include <unordered_set>
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    
    void removeLoop(Node* head)
    {
        Node *curr=head;
        unordered_set<Node *> store;
        store.insert(curr);
        while(curr!=NULL)
        {
            if(curr->next!=NULL && store.find(curr->next)==store.end())
            {
                store.insert(curr->next);
            }
            else
            {
                curr->next=NULL;
                break;
            }
            curr=curr->next;
        }
        // code here
        // just remove the loop without losing any nodes
    }
};
