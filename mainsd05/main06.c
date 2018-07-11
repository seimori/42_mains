#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	s1[] = "Heyaa";
	char	s2[] = "Hey";

	printf("Original: %i", strcmp(s1, s2));
	printf("\nMine: %i", ft_strcmp(s1, s2));
	return (0);
}
