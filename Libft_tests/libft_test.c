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

int	main(int ac, char **av)
{
	int	x;

	x = -1;
	if (ac > 1)
	{
		printf("LEN : %lu	ATOI : %i\n"
					, ft_strlen(av[1])
					, ft_atoi(av[1])
				);
		while (av[1][++x])
		{
			printf("%c alpha = %i	digit = %i	alnum = %i	ascii = %i	print = %i	tolower = %c	toupper = %c\n"
					, av[1][x]
					, ft_isalpha(av[1][x])
					, ft_isdigit(av[1][x])
					, ft_isalnum(av[1][x])
					, ft_isascii(av[1][x])
					, ft_isprint(av[1][x])
					, ft_tolower(av[1][x])
					, ft_toupper(av[1][x])
				);
		}
	}
			/*	STRLCPY TEST	*/
	printf("STRLCPY TEST\n");
	char zsrc1a[] = "abcde";
	char zdest1a[] = "1234567";
	char zsrc1b[] = "abcde";
	char zdest1b[] = "1234567";
	char zsrc2a[] = "abcd";
	char zdest2a[] = "123";
	char zsrc2b[] = "abcd";
	char zdest2b[] = "123";
	char zsrc3a[] = "";
	char zdest3a[] = "";
	char zsrc3b[] = "";
	char zdest3b[] = "";
	char zsrc4a[] = "12345";
	char zdest4a[] = "abc";
	char zsrc4b[] = "12345";
	char zdest4b[] = "abc";
	
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_strlcpy(zdest1a, zsrc1a, 0) == strlcpy(zdest1b, zsrc1b, 0) ? "Pass" : "Fail",
			strcmp(zdest1a, zdest1b) == 0 && strcmp(zsrc1a, zsrc1b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(zdest2a, zsrc2a, 3) == strlcpy(zdest2b, zsrc2b, 3) ? "Pass" : "Fail",
			strcmp(zdest2a, zdest2b) == 0 && strcmp(zsrc2a, zsrc2b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(zdest3a, zsrc3a, 0) == strlcpy(zdest3b, zsrc3b, 0) ? "Pass" : "Fail",
			strcmp(zdest3a, zdest3b) == 0 && strcmp(zsrc3a, zsrc3b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(zdest4a, zsrc4a, 2) == strlcpy(zdest4b, zsrc4b, 2) ? "Pass" : "Fail",
			strcmp(zdest4a, zdest4b) == 0 && strcmp(zsrc4a, zsrc4b) == 0 ? "Pass" : "Fail");
/*
	char src1a[] = "abcde";
	char dest1a[] = "1234567";
	char src2a[] = "abcde";
	char dest2a[] = "1234567";
	char src3a[] = "";
	char dest3a[] = "";
	char src4a[] = "12345";
	char dest4a[] = "abc";
	printf("SIZE 0 : SOURCE %s DEST %s\n", src1a, dest1a);
	printf("%li\n", ft_strlcpy(dest1a, src1a, 0));
	printf("CHANGEMENT 0 : SOURCE %s DEST %s\n\n", src1a, dest1a);
	
	printf("SIZE 0 : SOURCE %s DEST %s\n", src2a, dest2a);
	printf("%li\n", strlcpy(dest2a, src2a, 0));
	printf("CHANGEMENT 0 : SOURCE %s DEST %s\n\n", src2a, dest2a);
	
	printf("SIZE 0 : SOURCE %s DEST %s\n", src3a, dest3a);
	printf("%li\n", ft_strlcpy(dest3a, src3a, 0));
	printf("CHANGEMENT 0 : SOURCE %s DEST %s\n\n", src3a, dest3a);
	
	printf("SIZE 2 : SOURCE %s DEST %s\n", src4a, dest4a);
	printf("%li\n", ft_strlcpy(dest4a, src4a, 2));
	printf("CHANGEMENT 2 : SOURCE %s DEST %s\n\n", src4a, dest4a);
*/
			/*	STRLCAT TEST	*/
	printf("STRLCAT TEST\n");
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
	char s7b[20] = "Shorter";
	char s8b[] = "ThanMyself";

	printf("%s\n", ft_strlcat(s1a, s2a, 6) == strlcat(s1b, s2b, 6) ? "Success" : "Fail");
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s3a, s4a, 10) == strlcat(s3b, s4b, 10) ? "Success" : "Fail");
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s5a, s6a, 4) == strlcat(s5b, s6b, 4) ? "Success" : "Fail");
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s7a, s8a, 0) == strlcat(s7b, s8b, 0) ? "Success" : "Fail");
	printf("%s\n", strcmp(s7a, s7b) == 0 && strcmp(s8a, s8b) == 0 ? "Success" : "Fail");
			/*	STRCHR TEST	*/
	printf("STRCHR TEST\n");
	const char * source2 = "The C Language";
	char * destination2;
	char * pointer2;
	int length2 = strlen(source2);

	destination2 = (char *) malloc(sizeof(char) * (length2 + 1));
	strcpy(destination2, source2);
	pointer2 = ft_strchr(destination2, 'a');
	while (pointer2 != NULL) {
		*pointer2 = 'A';
		pointer2 = ft_strchr(destination2, 'a');
	}
	/* Display result : The C LAnguAge */
	printf( "Result : %s\n", destination2 );
	free( destination2 );
	printf("%i\n", (strchr("", 'a') == ft_strchr("", 'a')));
	strchr(((void *)0), 'a');
	ft_strchr(((void *)0), 'a');
	strchr(NULL, '\0');
	ft_strchr(NULL, '\0');
	//ft_strchr(NULL, 'a');
			/*	STRRCHR TEST	*/
	printf("STRRCHR TEST\n");
	const char * originalFilename = "folder.image.jpg";
	size_t	size;
	size = strlen(originalFilename); 
	char * destinationFilename = (char *) malloc(size + 1);
	strcpy(destinationFilename, originalFilename);
	// Et on y remplace l'extension du fichier par l'extension .png
	char * lastDotPos = ft_strrchr(destinationFilename, '.');
	strcpy(lastDotPos, ".png");
	puts(originalFilename);
	puts(destinationFilename);
	free(destinationFilename);
			/*	STRNCMP TEST	*/
	printf("STRNCMP TEST\n");
	const char	st1[]= "Coucou";
	const char	st2[]= "Coucou";
	const char	st3[]= "C";
	const char	st4[]= "";
	const char	st5[]= "kjjh";
	const char	st6[]= "Couc";

	printf("STRNCMP\n\n");
	printf("%i	=	%i	?\n", ft_strncmp(st1,st2, 5), strncmp(st1, st2, 5));
	printf("%i	=	%i	?\n", ft_strncmp(st1,st5, 4), strncmp(st1, st5, 4));
	printf("%i	=	%i	?\n", ft_strncmp(st1,st6, 4), strncmp(st1, st6, 4));
	printf("%i	=	%i	?\n", ft_strncmp(st2,st3, 0), strncmp(st2, st3, 0));
	printf("%i	=	%i	?\n", ft_strncmp(st3,st4, 3), strncmp(st3, st4, 3));
	printf("%i	=	%i	?\n", ft_strncmp(st5,st4, 1), strncmp(st5, st4, 1));
	printf("%i	=	%i	?\n", ft_strncmp(st5,st4, 7), strncmp(st5, st4, 7));
	printf("%i	=	%i	?\n", ft_strncmp(st5,st4, 9), strncmp(st5, st4, 9));
	printf("%i	=	%i	?\n", ft_strncmp(st5,st4, 15), strncmp(st5, st4, 15));
			/*	STRNSTR TEST	*/
	printf("STRNSTR\n");
	const char	*largestring = "Foo Bar	Baz";
	const char	*smallstring = "Bar";
	const char a1a[10] = "Test1 OK";
	const char a2a[] = "OK";
	const char a1b[10] = "TOKE";
	const char a2b[] = "OKY";
	const char a2c[] = "OKY";
	const char a3a[10] = "Same";
	const char a4a[] = "Size";
	const char a3b[10] = "Trois";
	const char a4b[] = "Trio";
	const char a3z[10] = "Trois";
	const char a4z[] = "Trio";
	const char a5a[20] = "Shorter";
	const char a6a[] = "ThanMyself";
	const char a5b[20] = "Shorty";
	const char a6b[] = "ThanYou";
	const char a7b[] = "";

	printf("%s	:	%s\n", ft_strnstr(a2c, a2a, 2), strnstr(a2c, a2a, 2));
	printf("%s	:	%s\n", ft_strnstr(a2a, a2c, 2), strnstr(a2a, a2c, 2));
	printf("%s	:	%s\n", ft_strnstr(largestring, smallstring, 3), strnstr(largestring, smallstring, 3));
	printf("%s	:	%s\n", ft_strnstr(a1a, a2a, 1), strnstr(a1a, a2a, 1));
	printf("%s	:	%s\n", ft_strnstr(a3a, a4a, 2), strnstr(a3a, a4a, 2));
	printf("%s	:	%s\n", ft_strnstr(a5a, a6a, 4), strnstr(a5a, a6a, 4));
	printf("%s	:	%s\n", ft_strnstr(a1a, a2a, 5), strnstr(a1a, a2a, 5));
	printf("%s	:	%s\n", ft_strnstr(a3a, a4a, 6), strnstr(a3a, a4a, 6));
	printf("%s	:	%s\n", ft_strnstr(a5b, a7b, 2), strnstr(a5b, a7b, 2));
	printf("%s	:	%s\n", ft_strnstr(a7b, a5b, 2), strnstr(a7b, a5b, 2));
	printf("%s	:	%s\n", ft_strnstr(a3b, a4b, 2), strnstr(a3z, a4z, 2));
	printf("%s	:	%s\n", ft_strnstr(a5b, a6b, 4), strnstr(a5b, a6b, 4));
	printf("%s	:	%s\n", ft_strnstr(a1b, a2b, 5), strnstr(a1b, a2b, 5));
	printf("%s	:	%s\n", ft_strnstr(a3b, a4b, 6), strnstr(a3b, a4b, 6));
	printf("%s	:	%s\n", ft_strnstr(a7b, a2a, 2), strnstr(a7b, a2a, 2));
	printf("%s	:	%s\n", ft_strnstr(a7b, a7b, 2), strnstr(a7b, a7b, 2));
	printf("%s	:	%s\n", ft_strnstr("", "test", 4), strnstr("", "test", 4));
	printf("%s	:	%s\n", ft_strnstr("", "te", 2), strnstr("", "te", 2));
	printf("%s	:	%s\n", ft_strnstr("rap", "rat", 2), strnstr("rap", "rat", 2));
	printf("%s	:	%s\n", ft_strnstr("test", "test", 4), strnstr("test", "test", 4));
	printf("%s	:	%s\n", ft_strnstr("testerons", "test", 4), strnstr("testerons", "test", 4));
}
