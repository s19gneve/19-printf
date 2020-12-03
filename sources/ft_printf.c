#include "ft.h"

void printf(char *s, ...)
{
	va_list args;
	int		numbs;
	int		i;
	char 	*s2;
	int		g;

	numbs = counts_args(s);
	i = 0;
	g = 0;
	va_start(args, numbs);
	while (s[i])
	{
		if (s[i] == "%")
			ft_strcat(s2 , va_arg(args, arg_type(s, g)));
			g += 1;
		else
			s2[j] = s[i];
		i++;
	}
	ft_putstr_fd(s2, 1);
}
