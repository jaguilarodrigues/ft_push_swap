#include "push_swap.h"

void	px(t_stack *s1, t_stack *s2)
{
	int	first_s2;

	if (s1 && s2 && s2->len >= 1)
	{
		first_s2 = pop_stack(s2);
		push_stack(first_s2, s1);
	}
}
