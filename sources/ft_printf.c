#include "ft.h"

static void *arg_type(va_list args, char *s, int *i)
{
	if (s[*i + 1] == '%')
		return ("%");
	if (s[*i + 1] == 'i' || s[*i + 1] == 'd')
		return (ft_itoa(va_arg(args, int)));
}

int get_len(va_list args)
{
	// get len argument
}

int	find_lenght(va_list args, char *s)
{
	// trouer longeur total output
}

int ft_printf(char *s, ...)
{
	va_list args;
	int		i;
	int		j;
	char 	*s2;
	int		len;

	i = 0;
	j = 0;
	va_start(args, s);
	len = find_lenght(args, s);
	if (s2 = malloc(len * sizeof(char)))
		return (0);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_strlcat(s2 , arg_type(args, s, &i), len);
			j += get_len(args);
			i++;
		}
		else
			s2[j++] = s[i];
		i++;
	}
	s2[j] == 0;
	ft_putstr_fd(s2, 1);
}
