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
