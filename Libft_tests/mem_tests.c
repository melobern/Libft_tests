/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:14:02 by mbernard          #+#    #+#             */
/*   Updated: 2023/11/22 13:56:11 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/mbernard/Documents/Libft/ft_atoi.c"
#include "/home/mbernard/Documents/Libft/ft_bzero.c"
#include "/home/mbernard/Documents/Libft/ft_calloc.c"
#include "/home/mbernard/Documents/Libft/ft_isalnum.c"
#include "/home/mbernard/Documents/Libft/ft_isalpha.c"
#include "/home/mbernard/Documents/Libft/ft_isascii.c"
#include "/home/mbernard/Documents/Libft/ft_isdigit.c"
#include "/home/mbernard/Documents/Libft/ft_isprint.c"
#include "/home/mbernard/Documents/Libft/ft_itoa.c"
#include "/home/mbernard/Documents/Libft/ft_lstadd_back_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstadd_front_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstclear_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstdelone_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstiter_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstlast_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstmap_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstnew_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_lstsize_bonus.c"
#include "/home/mbernard/Documents/Libft/ft_memchr.c"
#include "/home/mbernard/Documents/Libft/ft_memcmp.c"
#include "/home/mbernard/Documents/Libft/ft_memcpy.c"
#include "/home/mbernard/Documents/Libft/ft_memmove.c"
#include "/home/mbernard/Documents/Libft/ft_memset.c"
#include "/home/mbernard/Documents/Libft/ft_putchar_fd.c"
#include "/home/mbernard/Documents/Libft/ft_putendl_fd.c"
#include "/home/mbernard/Documents/Libft/ft_putnbr_fd.c"
#include "/home/mbernard/Documents/Libft/ft_putstr_fd.c"
#include "/home/mbernard/Documents/Libft/ft_split.c"
#include "/home/mbernard/Documents/Libft/ft_strchr.c"
#include "/home/mbernard/Documents/Libft/ft_strdup.c"
#include "/home/mbernard/Documents/Libft/ft_striteri.c"
#include "/home/mbernard/Documents/Libft/ft_strjoin.c"
#include "/home/mbernard/Documents/Libft/ft_strlcat.c"
#include "/home/mbernard/Documents/Libft/ft_strlcpy.c"
#include "/home/mbernard/Documents/Libft/ft_strlen.c"
#include "/home/mbernard/Documents/Libft/ft_strmapi.c"
#include "/home/mbernard/Documents/Libft/ft_strncmp.c"
#include "/home/mbernard/Documents/Libft/ft_strnstr.c"
#include "/home/mbernard/Documents/Libft/ft_strrchr.c"
#include "/home/mbernard/Documents/Libft/ft_strtrim.c"
#include "/home/mbernard/Documents/Libft/ft_substr.c"
#include "/home/mbernard/Documents/Libft/ft_tolower.c"
#include "/home/mbernard/Documents/Libft/ft_toupper.c"
#include <assert.h>
#include <bsd/string.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*null_test = NULL;
			/*	MEMSET TEST	*/
	printf("ORIGINAL TAB\n");
	int	array[] = {54, 85, 20, 63, 21};
	size_t	size = sizeof( int ) * 5;
	int	length;

	for (length = 0; length < 5; length++)
		printf( "%d ", array[length]);
	printf("\n");
	printf("MEMSET TEST\n");
	ft_memset(array, 0, size);

	/* Display the new values */
	for (length = 0; length < 5; length++)
		printf( "%d ", array[length] );
	printf("\n");
			/*	BZERO TEST	*/
	printf("BZERO TEST\n");
	int	array2[] = {54, 85, 20, 63, 21};
	size = sizeof( int ) * 5;
	ft_bzero(array2, size);
	for (length = 0; length < 5; length++)
		printf( "%d ", array2[length]);
	printf("\n");
			/*	MEMCPY TEST	*/
	printf("MEMCPY TEST\n");
	int	array3[] = {54, 85, 20, 63, 21};
   	int * copy = NULL;
	length = sizeof( int ) * 5;
	copy = (int *) malloc( length );
	ft_memcpy(copy, array3, length);
	for (length = 0; length < 5; length++)
		printf("%d ", copy[length]);
	printf("\n");
	free(copy);
			/*	STRDUP TEST	*/
	printf("STRDUP TEST\n");
	const char *original = "The original string.";
	char *copy2 = strdup(original);
	printf("%s\n", copy2);
	free(copy2);
	char *strD = "bonjour";
	char *copyD = ft_strdup(strD);
	if (copyD)
	{
		printf("%s\n", copyD);
		free(copyD);
	}
			/*	CALLOC TEST	*/
	printf("CALLOC TEST\n");
	int i;
	int * pointer = (int *) ft_calloc(  10, sizeof(int) );

	/* Un petit test sur le bon fonctionnement de calloc */
	assert( pointer != NULL );

	/* Le dernier élément du tableau ne sera pas affecté par la */
	/* boucle mais n'oubliez pas que calloc initialise de toute */
	/* façon à 0 chaque octet. */
	for ( i=0; i< 10-1; i++ ) {
	pointer[i] = i;
	}
	/* On affiche le contenu du tableau d'entier */
	/* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
	for (i=0; i< 10; i++ ) {
	printf( "%d", pointer[i] );
	}
	printf("\t==\t 0123456780\n");
	free( pointer );
			/*	MEMMOVE TEST	
	printf("MEMMOVE TEST\n");
	// On crée une zone de mémoire de 10 entiers et contenant
	// que neuf valeurs. La dixième est non utilisée (0).
	int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };
	// On affiche le contenu de la collection
	for( int i=0; i< 10; i++ ) {
	printf( "%d ", data[i] );
	}
	printf("\n");
	// On décale les éléménts dans la collection ...
	void * source = (void *) data;
	void * destination = (void *) ( data + 1 );
	size =  10 * sizeof( int );
	memmove( destination, source, size );
	// ... pour y insérer une nouvelle valeur en tête
	data[0] = 10;

	// On affiche le contenu de la collection
	for( int i=0; i< 10; i++ ) {
	printf( "%d ", data[i] );
	}
	*/

			/*	MEMCMP	*/
	
	printf("MEMCMP TEST\n");
	const char	*mem1 = "coucou";
	const char	*mem2 = "courage";
	const char	*mem3 = "couper";
	printf("%i\t===\t%i\n", memcmp(mem1, mem2, 4), ft_memcmp(mem1, mem2, 4));
	printf("%i\t===\t%i\n", memcmp(mem2, mem1, 4), ft_memcmp(mem2, mem1, 4));
	printf("%i\t===\t%i\n", memcmp(mem1, mem3, 4), ft_memcmp(mem1, mem3, 4));
	printf("%i\t===\t%i\n", memcmp(mem1, mem2, 3), ft_memcmp(mem1, mem2, 3));
/*	NO POSSIBLE COMPILATION WITH THE FLAGS WITH NULL PARAMETER
	memcmp(((void*)0), mem1, 4);
	printf("%i\t===\t%i\n", memcmp(((void*)0), mem1, 4), memcmp(((void*)0), mem1, 4));
*/
	printf("\n");
}
