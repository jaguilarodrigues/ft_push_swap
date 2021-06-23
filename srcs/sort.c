#include "push_swap.h"

int sort_two(t_stack *a)
{
    if (a->stack[0] > a->stack[1])
    {
        //swap_A;
    }
    return (0);
}

int sort_three(t_stack *a)
{
    // if (((a->stack[2] > a->stack[1]) && (a->stack[1] < a->stack[0]) && (a->stack[2] < a->stack[0])) ||
    //     ((a->stack[2] < a->stack[1]) && (a->stack[1] > a->stack[0]) && (a->stack[2] < a->stack[0])) ||
    //     ((a->stack[2] > a->stack[1]) && (a->stack[1] > a->stack[0])))
    // {
    //     //sa
    // }
    // if ((a->stack[2] > a->stack[1]) && (a->stack[1] > a->stack[0]))
    //     //ra
    // else
    //     //rra

}

int sort(t_stack *a)
{
    if (a->len == 1)
        return (0);
    if (a->len == 2)
        return (sort_two(a));
    if (a->len == 3)
        return (sort_three(a));
}