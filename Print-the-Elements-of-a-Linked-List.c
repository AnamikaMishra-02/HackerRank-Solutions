// We only need to complete this function

void printLinkedList(SinglyLinkedListNode* head) {

while( head != NULL)
{
    printf("%d\n",head->data);
    head=head->next;
}
}
