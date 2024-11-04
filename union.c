/******************************************************************************/
/*                        RAKOTONIAINA Tefy Nambinintsoa                      */
/*                            Create: 28/10/24 16:58                          */
/*                                                                            */
/*                                                                            */
/******************************************************************************/
#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

void	ft_print(char *argv)
{
	int     i;
	int     x;

	i = 1;
	write(1, &argv[0], 1);
	while (argv[i] != '\0')
	{
		x = 0;
		while (argv[x] != argv[i] && x < ft_strlen(argv))
		{
			x++;
			if (x == i)
				write(1, &argv[i], 1);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_print(ft_strcat(argv[1], argv[2]));
	write(1, "\n", 1);
	return (0);
}
