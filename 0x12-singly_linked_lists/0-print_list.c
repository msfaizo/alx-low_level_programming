#include "lists.h"
/**
 * print_list - prints all the elements  a list_t list.
 * @h: singly linked list.
 * Return: no of elements in the list.
 */
size_t print_list(const list_t *h)
{
    size_t no_elem;
    no_elem = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        no_elem++;
    }
    return (no_elem);
}
