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
