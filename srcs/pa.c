#include "checker.h"

void	pa(t_stack *s_a, t_stack *s_b)
{
	int	first_b;

	if (s_a && s_b && s_b->len >= 1)
	{
		first_b = pop_stack(s_b);
		push_stack(first_b, s_a);
	}
}
