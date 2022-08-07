#include "test2_header.h"

void    show_list(t_list *head_a, t_list *head_b)
{
    t_list        *temp1;
    t_list        *temp2;

    temp1 = head_a->next;
    temp2 = head_b->next;
    printf("A\tB\n====\t====\n");
    while (temp1 || temp2)
    {
        if (temp1)
        {
            printf("%d", temp1->content);
            temp1 = temp1->next;
        }
        else
            printf("_");
        if (temp2)
        {
            printf("\t%d", temp2->content);
            temp2 = temp2->next;
        }
        else
            printf("\t_");
        printf("\n");
    }
    printf("\n");
}