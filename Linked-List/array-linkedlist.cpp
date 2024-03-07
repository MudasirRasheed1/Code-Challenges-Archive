/*You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.
Make a linked list from the array and return the head of the linked list.
The head of the linked list is the first element of the array, and the tail of the linked list is the last element.*/

Node* constructLL(vector<int>& arr) {
    Node * head = new Node(arr[0]);
    Node * mover = head;
    int n = arr.size();
    for(int i = 1; i < n; i++)
    {
        Node * temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
