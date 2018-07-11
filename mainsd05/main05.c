#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	str[] = "Who are you?";
	char	to_find[] = "are";

	printf("Original: %s", strstr(str, to_find));
	printf("\nMine: %s", ft_strstr(str, to_find));
	return (0);
}
