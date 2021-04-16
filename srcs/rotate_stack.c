#include "checker.h"

void	rotate(t_stack *s)
{
	int	i;
	int	first;

	i = 0;
	first = s->stack[0];
	while (i < s->len - 1)
	{
		s->stack[i] = s->stack[i + 1];
		i++;
	}
	s->stack[i] = first;
}
