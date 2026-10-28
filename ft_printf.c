#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
int		ft_isexist(char c, char *s);

int	ft_printf(const char *format, ...)
{
	int	i;

	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{

			


		}

		ft_putchar(format[i]);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_isexist(char c, char *s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}



int main() { 

	
	ft_printf("Hello %i \n"); // \n eklendi

	//printf("Hello %i \n", ft_isexist('a',"asdf")); // \n eklendi

	return (0); 
}