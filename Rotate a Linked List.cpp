class Solution
{
    public:
    
    
    int size(Node *head)
    {
        int n=0;
        while(head!=NULL)
        {
            head=head->next;
            n++;
        }
        return n;
    }
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        int n=size(head);
        k=k%n;
        if(k==0)
        return head;
    
        Node* first=head;
        Node *temp=head;
        k--;
        while(k>0)
        {
            k--;
            temp=temp->next;
        }
        Node* newHead=temp->next;
        Node* newTemp=temp->next;
        temp->next=NULL;
        
        while(newTemp->next!=NULL)
        {
            newTemp=newTemp->next;
        }
        
        newTemp->next=first;
        
        return newHead;
        
    }
    
};
