#include "ft.h"

static int counts_args(char *s) {
	int i;
	int a;

	i = 0;
	a = 0;
	if (s[0] == 0)
		return (0);
	while (s && s[i + 1] != 0 )
	{
		if (s[i] == "%" && s[i + 1] != "%")
		{
			a++;
		}
		i++;
	}
	return (a);
}

int ft_printf(char *s, ...)
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
