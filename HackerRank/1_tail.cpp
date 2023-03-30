int Length(SinglyLinkedListNode *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

int getNode(SinglyLinkedListNode *llist, int positionFromTail)
{
    for (int i = 0; i < Length(llist) - positionFromTail - 1; i++)
    {
        llist = llist->next;
    }

    return llist->data;
}