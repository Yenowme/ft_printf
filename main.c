#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		rt;
	int		rrt;
	void	*p;

	p = &rt;
	rrt = printf("rp = %p\n", p);
	rt = ft_printf("p = %p\n", p);
	ft_printf("rt = %d rrt = %d\n", rt, rrt);
	printf("rt = %d rrt = %d\n", rt, rrt);
}
