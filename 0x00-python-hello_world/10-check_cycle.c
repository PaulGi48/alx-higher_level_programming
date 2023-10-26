int check_cycle(listint_t *list)
{
    if (list == NULL) {
        return 0;
    }

    listint_t *slow = list;
    listint_t *fast = list->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }

    return 0;
}
