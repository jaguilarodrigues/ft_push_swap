#include "checker.h"

int		pop_stack(t_stack *s)
{
	int *tmp;
	int top;
	int i;

	tmp = (int *)malloc((s->len - 1) * sizeof(int));
	i = 0;
	while (i < (s->len - 1))
	{
		tmp[i] = s->stack[i + 1];
	}
	top = s->stack[0];
	free(s->stack);
	s->stack = tmp;
	s->len--;
	return(top);
}