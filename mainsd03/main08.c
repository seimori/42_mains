
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("My atoi: |%i|\nOriginal atoi: |%i|", ft_atoi("-2147483648 67"), atoi("-2147483648 67"));
	return (0);
}
