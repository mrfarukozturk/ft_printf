#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	t_flags	flags;

	ft_memset(&flags, 0, sizeof(t_flags));
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (!flags.specifier)
			{
				if (ft_strchr("abshid", format[i]) != NULL)
				{
					printf("buldu \n"); // \n eklendi
					flags.specifier = format[i];

				}
				i++;
			}
		}
		ft_putchar(format[i]);
		i++;
	}
	return (0);
}
