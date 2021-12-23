

#include<vector>

class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
        vector<Node *> odd;
        vector<Node *> even;
        Node *curr=head;
        
        while(curr!=NULL)
        {
            odd.push_back(curr);
            if(curr->next!=NULL)
            {
                curr=curr->next;
                even.push_back(curr);
                
            }
            curr=curr->next;
        }
        int i=0,j=0;

        head=odd[0];
        Node *temp=head;
        i++;
        while(i<odd.size())
        {
            temp->next=odd[i];
            i++;
            temp=temp->next;
        }
        while(j<even.size())
        {
            temp->next=even[j];
            j++;
            temp=temp->next;
        }
        temp->next=NULL;
       // Your Code here
    }
};




#include <vector>

class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
        Node* trial=head;
        vector<int> odd;
        vector<int> even;
        while(trial!=NULL)
        {
            odd.push_back(trial->data);
            if(trial->next!=NULL)
            {
                trial=trial->next;
                even.push_back(trial->data);
                
            }
            trial=trial->next;
        }
        Node *curr=head;
        int i=0,j=0;
        while(i<odd.size())
        {
            curr->data=odd[i];
            i++;
            curr=curr->next;
        }
        while(j<even.size())
        {
            curr->data=even[j];
            j++;
            curr=curr->next;
        }
       
       // Your Code here
    }
};
