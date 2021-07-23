#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("%s\n", "");
	printf("%s\n", "");
	int rt = ft_printf("%s\n", NULL);
	int rrt = printf("%s\n", NULL);
	printf("rt = %d,rrt = %d\n", rt, rrt);
	printf("max = %d,min = %d\n", 2147483647, -2147483647);
}
