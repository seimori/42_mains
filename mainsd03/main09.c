#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int		size;
	int		i;
	int	tab[] = {6, 3, 2, 456, 2, 34};

	i = 0;
	size = 6;
		ft_sort_integer_table(tab, size);
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}
	return (0);
}
