#include "libft.h"

int main(void)
{
	char a[100] = "this!is!string!wow!";
	char **split;

	split = ft_split(a, '!');
	for (int i = 0; split[i]; i++)
		printf("%s\n", split[i]);
	return 0;
}