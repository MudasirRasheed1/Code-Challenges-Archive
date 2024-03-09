/*Problem statement
Given a singly linked list of 'N' nodes. Your task is to delete the middle node of this list and return the head of the modified list */
/* we use torotise and hare algo to node just before middle . we then modify the next of this node with address of node just after the node */

Node* deleteMiddle(Node* head){
    Node * fast = head;
    Node * slow = head;
    Node * prev = nullptr;
    if(head == nullptr || head -> next == nullptr)
    {
        return nullptr;
    }
    while(fast && fast -> next)
    {
        prev = slow;
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    prev -> next = prev -> next -> next;
    delete slow;
    return head;
    
}
