/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    vector<Node *> less;
    vector<Node *> equal;
    vector<Node *> more;
    Node* temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data<x)
        less.push_back(temp);
        else if(temp->data==x)
        equal.push_back(temp);
        else if(temp->data >x)
        more.push_back(temp);
    
        temp=temp->next;
    }
    Node* res;
    Node* ret;
    int i=0,j=0,k=0;
    if(less.size()!=0)
    {
        res=less[0];
        i++;
        
    }
    else if(equal.size()!=0)
    {
        res=equal[0];
        j++;
    }
    else
    {
        res=more[0];
        k++;
    }
    ret=res;
    
    while(i<less.size())
    {
        Node* curr=less[i];
        i++;
        ret->next=curr;
        ret=ret->next;
    }
     while(j<equal.size())
    {
        Node* curr=equal[j];
        j++;
        ret->next=curr;
        ret=ret->next;
    }
     while(k<more.size())
    {
        Node* curr=more[k];
        k++;
        ret->next=curr;
        ret=ret->next;
    }
    ret->next=NULL;
    return res;
    // code here
}
