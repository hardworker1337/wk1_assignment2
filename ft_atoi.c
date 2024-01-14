static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n')
		return (1);
	if (c == '\t' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long long int	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace((char)nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (result > 9223372036854775807)
			if (sign == -1)
				return (0);
			else
				return (-1);
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
