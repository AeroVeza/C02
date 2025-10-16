#include <stdio.h>

int	ipssi_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "";
	char s2[] = "";
	unsigned int n = 7;
	int result;

	result = ipssi_strncmp(s1, s2, n);
	printf("%d\n", result);

	return (0);
}
