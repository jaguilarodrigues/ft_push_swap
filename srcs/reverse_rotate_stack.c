#include "checker.h"

void	reverse_rotate(t_stack *s)
{
	int	i;
	int	last;

	i = s->len - 1;
	last = s->stack[s->len - 1];
	while (i > 0)
	{
		s->stack[i] = s->stack[i - 1];
		i--;
	}
	s->stack[i] = last;
}
