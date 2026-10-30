/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_printf.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: fozturk <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/30 11:40:42 by fozturk        #+#    #+#                */
/*   Updated: 2026/10/30 11:40:48 by fozturk        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	t_flags	flags;
	int len;

	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_memset(&flags, 0, sizeof(t_flags));
			while (!flags.specifier && format[i])
			{
				if (ft_strchr("cspdisuxX%", format[i]) != NULL)
				{
					printf("buldu \n");
					flags.specifier = format[i];
				}
				i++;
			}
		}
		else
		{
			ft_putchar(format[i]);
			len++;
			i++;
		}
	}
	return (len);
}
