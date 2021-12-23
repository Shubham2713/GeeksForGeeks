int length(Node * head)
{
    int size=0;
    
    while(head!=NULL)
    {
        size++;
        head=head->next;
    }
    return size;
}

Node* trav(Node* head,int len)
{
    while(len>0)
    {
        head=head->next;
        len--;
    }
    return head;
}


//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    int c1=length(head1);
    int c2=length(head2);
    
    if(c1>c2)
    head1=trav(head1,c1-c2);
    else
    head2=trav(head2,c2-c1);
    
    
    while(head1!=NULL && head2!=NULL && head1!=head2)
    {
        head1=head1->next;
        head2=head2->next;
    }
    if(head1!=NULL)
    return head1->data;
    return -1;
    // Your Code Here
}



int intersectPoint(Node* head1, Node* head2)
{
    unordered_set<Node *> nodes;
    while(head1!=NULL)
    {
        nodes.insert(head1);
        head1=head1->next;
    }
    
    while(head2!=NULL)
    {
        if(nodes.find(head2)!=nodes.end())
        return head2->data;
        
        head2=head2->next;

    }
    return -1;
    // Your Code Here
}
