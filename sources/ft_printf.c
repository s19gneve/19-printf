

void printf(char *s, ...)
{
	va_list args;
	int		numb;
	int		i;
	char 	*s2;

	numbs = counts_args(s);
	i = 0;
	while (s[i])
	{
		if (s[i] == "%")
			s2 += add_argv();
		else
			s2[j] = s[i];
		i++;
	}
	ft_putstr_fd(s2, 1);
}
