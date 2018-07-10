
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("My atoi: %i\nOriginal atoi: %i", ft_atoi("\n-23k4123 23"), atoi("\n-23k4123 23"));
	return (0);
}
