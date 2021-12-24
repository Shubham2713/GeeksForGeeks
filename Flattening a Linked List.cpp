Node *flatten(Node *root)
{
    if(root==NULL)
    return NULL;
   // Your code here
   vector<int> nums;
   Node* curr=root;
   while(curr!=NULL)
   {
       Node* temp=curr;
       while(temp!=NULL)
       {
           nums.push_back(temp->data);
           temp=temp->bottom;
       }
       curr=curr->next;
       
   }
   sort(nums.begin(),nums.end());
   Node* res=new Node(nums[0]);
   Node* temp=res;
   for(int i=1;i<nums.size();i++)
   {
       Node* create=new Node(nums[i]);
       temp->bottom=create;
       temp=temp->bottom;
   }
   return res;
   
}
