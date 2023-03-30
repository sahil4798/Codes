bool has_cycle(SinglyLinkedListNode *head)
{
    if (head == NULL)
        return NULL;

    struct SinglyLinkedListNode *p = head, *q = head;
    while (p != 0)
    {
        while (q->next != 0)
        {
            if (p == q)
                return 1;

            q = q->next;
        }
        p = p->next;
    }

    return 0;
}

bool has_cycle(SinglyLinkedListNode *head)
{
    if (head == NULL)
        return NULL;

    struct SinglyLinkedListNode *p = head, *q = head, *temp = head;
    int count = 0;
    while (p != 0)
    {
        while (q->next != 0)
        {
            q = head;
            for (int i = 0; i < count; i++)
            {
                temp = temp->next;
            }
            if (p == q && q != temp)
                return 1;

            count++;
            q = q->next;
        }
        p = p->next;
    }

    return 0;
}

bool has_cycle(SinglyLinkedListNode *head)
{
    if (head == NULL)
        return NULL;

    struct SinglyLinkedListNode *p = head, *q = head, *temp = head;
    int count = 0;
    while (p != 0)
    {   
        q =head;
        for (int i = 0; i < count; i++)
        {
            temp = temp->next;
        }
        while (q->next != 0)
        {

            if (p == q && q != temp)
                return 1;

            q = q->next;
        }
        p = p->next;
        count++;
    }

    return 0;
}  