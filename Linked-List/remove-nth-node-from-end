/*Given a linked list and an integer N, the task is to delete the Nth node from the end of the given linked list.*/
/*The most intitutive way to solve this problem is to find lenght of linked list(K) in one pass. In next pass then find (k-N+1) th node from the
beginning which corresponds to N th node from begining /*

Node* removeKthNode(Node* head, int K)
{
    Node * temp = head;
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp -> next;
    }
    if(count - K == 0)
    {
        head = head -> next;
        return head;
    }
    count = count - K -1;
    temp = head;
    while(count != 0)
    {
        count--;
        temp = temp -> next;
    }
    temp -> next = temp -> next -> next;
    return head;
}

/*However this solution has complexity of O(2 * K) where k is size of linked list. In order to reduce time complexity we have to use two pointers and some brain
. Move fast pointer such that it crosses N th node. Now it will be on (N + 1) th node from begining. it has to travel (K - N ) nodes to reach to K th node. Now as we 
are moving fast pointer if we move slow pointer along with it then it will also travel  and reach to  (K - N ) th node from starting. 
Now you have your pointer at (K - N ) th node, so you can change liks for (K - N + 1) th node form begining that is N th node from end*/
