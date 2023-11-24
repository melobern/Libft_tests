/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:37 by mbernard          #+#    #+#             */
/*   Updated: 2023/11/22 12:55:24 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/mbernard/Documents/Libft/libft.h"
#include "/home/mbernard/Documents/Libft/ft_split.c"
#include "/home/mbernard/Documents/Libft/ft_substr.c"
#include "/home/mbernard/Documents/Libft/ft_strlen.c"
#include "/home/mbernard/Documents/Libft/ft_strdup.c"
#include "/home/mbernard/Documents/Libft/ft_calloc.c"
#include "/home/mbernard/Documents/Libft/ft_bzero.c"
#include "/home/mbernard/Documents/Libft/ft_memset.c"
#include <stdio.h>


int main( void )
{
 	char *test = "NULL LOL LOL";
 	char c = ' ';
 	char **splitted;

 	splitted = ft_split( test, c);

 	int i = 0;
 	int len = ft_len_tab(test, c);
 	while ( i < len )
 	{
 		printf("%s\n", splitted[i]);
 		i++;
 	}
 	ft_free_tab( splitted);

 	return ( 0 );
}
