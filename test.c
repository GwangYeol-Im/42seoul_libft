#include "libft.h"

int main(void)
{
	char *a;
	char *b;

	a = calloc(5, sizeof(char));
	b = ft_calloc(5, sizeof(char));

	for(int i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for(int i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
	return 0;
}