#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_atoi.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_bzero.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_calloc.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_isalnum.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_isalpha.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_isascii.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_isdigit.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_isprint.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_itoa.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstadd_back_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstadd_front_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstclear_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstdelone_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstiter_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstlast_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstmap_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstnew_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_lstsize_bonus.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_memchr.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_memcmp.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_memcpy.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_memmove.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_memset.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_putchar_fd.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_putendl_fd.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_putnbr_fd.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_putstr_fd.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_split.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strchr.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strdup.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_striteri.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strjoin.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strlcat.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strlcpy.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strlen.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strmapi.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strncmp.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strnstr.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strrchr.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_strtrim.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_substr.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_tolower.c"
#include "/home/mbernard/Documents/TEST_ONLY_NO_PUSH/LIBFT/ft_toupper.c"
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char test(unsigned int i, char c)
{
    char l = ft_toupper(l);
    printf("Test function: index = %d and %c\n", i, c);
    return (l);
}

int main(void)
{
    char    *str = calloc(2,1);
    free(str);

    char    *sit = ft_itoa(80);
    free(sit);

    t_list  *my_list = ft_lstnew("hello");
    free(my_list);

    char    **tab = ft_split("hello you", ' ');
    ft_free_tab(tab);

    char   *twin = ft_strdup("copy me");
    free (twin);

    char   *married = ft_strjoin("join", "us");
    free(married);

    char (*up)(unsigned int, char) = &test;
    char    *mapi = ft_strmapi("coucou", up);
    free(mapi);

    char   *ifeeltrimmed = ft_strtrim(" hey oh ! ", " ");
    free(ifeeltrimmed);

    char    *submarine = ft_substr("No ! Take this ! Not this...", 5, 11);
    free(submarine);
}
