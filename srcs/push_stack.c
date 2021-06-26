#include "push_swap.h"

void	push_stack(int n, t_stack *s)
{
	int	*tmp;
	int	i;
	int	tam;

	if (!s->stack)
		tam = 1;
	else
		tam = s->len + 1;
	i = 0;
	tmp = (int *)malloc(tam * sizeof(int));
	tmp[tam - 1] = n;
	while (i < tam - 1)
	{
		tmp[i] = s->stack[i];
		i++;
	}
	free(s->stack);
	s->stack = tmp;
	s->len = tam;
}
