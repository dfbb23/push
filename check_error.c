
//Here an error message is being printed out
void	ft_error(void)
{	
	write (2, "Error\n", 6);
	exit(1);
}

//function which checks the character if it is alphanumerical
int	ft_isalpha(int c)
{
	if ((c >= 58 && c <= 126) || (c >= 33 && c <= 42)
		|| (c == 44) || (c == 46) || (c == 47))
		return (1);
	return (0);
}

//chec if the chracter is negative
int	sign(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

//check if the character is digit
int	digit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

//check if character is space character
int	space(int c)
{
	if (c == ' ')
		return (1);
	return (0);
}


void	check_error(char **argv, int i, int j)
{
i = 0;
	while (argv[i])
	{
		j = 0;

		while ((argv[i][j] != '\0'))
		{
             if (ft_isalpha(argv[i][j]))
			             	ft_error();
			if (sign(argv[i][j]))
			{
				j++;
				if (!digit(argv[i][j]))
			             	ft_error();
			}
			else if (digit(argv[i][j]))
			{
				j++;
				if (argv[i][j] == '\0')
					break ;
				if (!digit(argv[i][j]) && !space(argv[i][j]))
			             	ft_error();
			}
			j++;
		}
		i++;
	}
	return ;
}
