#include "ft.h"

static void *arg_type(char *s, int c);

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
	int		j;
	char 	*s2;
	int		g;
	int		len;

	numbs = counts_args(s);
	i = 0;
	g = 0;
	j = 0;
	va_start(args, numbs);
	len = find_lenght(args, numbs, s);
	while (s[i])
	{
		if (s[i] == "%")
		{
			ft_strlcat(s2 , typeof(*va_arg(args, arg_type(s, g))), len);
			j += len(args);
			g += 1;
		}
		else
			s2[j++] = s[i];
		i++;
	}
	s2[j] == 0;
	ft_putstr_fd(s2, 1);
}
