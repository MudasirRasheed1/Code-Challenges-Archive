/*Problem statement
Given a singly linked list of 'N' nodes. The objective is to determine the middle node of a singly linked list. However, if the list has an even number of nodes, we return the second middle node.
*/
/* This is an intitutive way of solving this question.For more efficient method you can search for Torotise Hare Algorithm */

Node *findMiddle(Node *head) {
    Node * mover = head;
    int count = 1;
    while(mover -> next)
    {
        mover = mover -> next;
        count++;
    }
    count /= 2;
    mover = head;
    while(count)
    {
        mover = mover -> next;
        count--;
    }
    return mover;

}
