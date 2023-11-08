#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);

}
// int main()
// {
// 	char s1[] = ":amine:\n";
// 	printf("%s\n", strdup(s1));
// 	printf("%s\n", ft_strdup(s1));
// 	return (0);
// }
