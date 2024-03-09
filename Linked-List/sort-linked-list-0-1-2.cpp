/*Given a linked list of 'N' nodes, where each node has an integer value that can be 0, 1, or 2. You need to sort the linked list in non-decreasing order and the return the head of the sorted list.*/
/* The efficient way to do this is by chainging links between nodes to create a new linked list where 0's 1's and 2's are in increasing order.
this can be achieved by creating  three dummy nodes and then linking all 0's 1's and 2's to them. After that we link these three linked lists 
  . Hence the problem is solved. */

Node* sortList(Node * head){
    Node * zerohead = new Node;
    Node * onehead = new Node;
    Node * twohead = new Node;
    Node * temp = head;
    Node * zerotail = zerohead;
    Node * onetail = onehead;
    Node * twotail = twohead;
    while(temp)
    {
        if(temp -> data == 0)
        {
            zerotail -> next = temp;
            zerotail = zerotail -> next;
        }
        else if(temp -> data == 1)
        {
            onetail -> next = temp;
            onetail = onetail -> next;
        }
        else
        {
            twotail -> next = temp;
            twotail = twotail -> next;
        }
        temp = temp -> next;
        
    }
    zerotail -> next = onehead -> next;
    onetail -> next = twohead -> next;
    twotail -> next = nullptr;
    return zerohead -> next;

}
