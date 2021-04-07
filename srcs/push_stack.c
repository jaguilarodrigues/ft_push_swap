#include "checker.h"

void	push_stack(int n, t_stack *s)
{
	int	*tmp;
	int	i;
	int	tam;

	if (!s->stack)
		tam = 1;
	else
		tam = s->len + 1;
	i = 1;
	tmp = (int *)malloc(tam * sizeof(int));
	tmp[0] = n;
	while (i < tam)
	{
		tmp[i] = s->stack[i - 1];
		i++;
	}
	free(s->stack);
	s->stack = tmp;
	s->len = tam;
}
