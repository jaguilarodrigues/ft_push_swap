#include "push_swap.h"

int sort_two(t_stack *a)
{
	if (a->stack[0] > a->stack[1])
	{
		cmd("sa", a, NULL);//swap_A;
	}
	return (0);
}

// int sort_three(t_stack *a)
// {
// 	// if (((a->stack[2] > a->stack[1]) && (a->stack[1] < a->stack[0]) && (a->stack[2] < a->stack[0])) ||
// 	//	 ((a->stack[2] < a->stack[1]) && (a->stack[1] > a->stack[0]) && (a->stack[2] < a->stack[0])) ||
// 	//	 ((a->stack[2] > a->stack[1]) && (a->stack[1] > a->stack[0])))
// 	// {
// 	//	 //sa
// 	// }
// 	// if ((a->stack[2] > a->stack[1]) && (a->stack[1] > a->stack[0]))
// 	//	 //ra
// 	// else
// 	//	 //rra

// }

void	print_report(t_stack *sa, t_stack *sb)
{
	ft_putstr_fd("---stack_a---\n", 14);
	print_stack(sa);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("---stack_b---\n", 14);
	print_stack(sb);
	ft_putstr_fd("\n", 1);
}

int sort(t_stack *stack_a)
{
	t_stack	stack_b;
	start_stack(&stack_b);

	if (stack_a->len == 1)
		return (0);
	if (stack_a->len == 2)
		return (sort_two(stack_a));
	// if (stack_a->len == 3)
	// 	return (sort_three(stack_a));
	print_report(stack_a, &stack_b);
	free_stack(&stack_b);
	return(1);
}