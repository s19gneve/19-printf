#include "ft.h"

static void *arg_type(va_list args, char *s, int *i)
{
	if (s[i + 1] == '%')
		return ("%");
	if (s[i + 1] == "i")
		return (ft_itoa(va_arg(args, int)));
}

static int counts_args(char *s)
{
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
	j = 0;
	va_start(args, numbs);
	len = find_lenght(args, numbs, s);
	while (s[i])
	{
		if (s[i] == "%")
		{
			ft_strlcat(s2 , arg_type(args, s, &i), len);
			j += len(args);
		}
		else
			s2[j++] = s[i];
		i++;
	}
	s2[j] == 0;
	ft_putstr_fd(s2, 1);
}
