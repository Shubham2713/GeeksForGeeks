


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
