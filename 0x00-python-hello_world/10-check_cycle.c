/* Definition for singly-linked list. */
struct listint_s {
    int n;
    struct listint_s *next;
};

typedef struct listint_s listint_t;

/**
 * check_cycle - Check if a singly-linked list has a cycle in it.
 * @list: Pointer to the head of the list.
 *
 * Return: 1 if there is a cycle, 0 otherwise.
 */
int check_cycle(listint_t *list)
{
    listint_t *slow = list, *fast = list;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            /* Cycle detected. */
            return 1;
        }
    }

    /* No cycle detected. */
    return 0;
}
