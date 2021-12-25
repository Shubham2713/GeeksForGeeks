class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* curr=head;
        node* prev,* next;
        prev=next=NULL;
        
        int i=0;
        while(curr!=NULL && i<k)
        {
            i++;
            next=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }
        if(next)
        head->next=reverse(next,k);
        
        return prev;
    }
};
