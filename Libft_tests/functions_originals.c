#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*  To show how ft_strdup/ft_strlen act different from strdup/strlen if we securize them, 
    verifying if *s exists   */

size_t	ft_strlen(const char *s)
{
	size_t	len;

    len = 0;
    if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		count;

	if (!s)
		return (NULL);
	copy = calloc(strlen(s) + 1, sizeof(char));
	if (!(copy))
		return (NULL);
	count = 0;
	while (s[count])
	{
		copy[count] = s[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	while (*ptr != (char)c)
	{
		if (*ptr == '\0')
			return (NULL);
		ptr++;
	}
	return (ptr);
}

char	*ft_strrchr(const char *s, int c)
{
	int			x;
	const char	*ptr;

	if (!s)
		return (NULL);
	x = ft_strlen(s);
	ptr = (char *)s;
	while (x >= 0)
	{
		if (ptr[x] == (char)c)
			return ((char *)ptr + x);
		x--;
	}
	return (NULL);
}

void test(unsigned int i, char *str)
{
   printf("Test function: index = %d and %s\n", i, str);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;
	unsigned int	len;

	x = 0;
	len = (unsigned int)ft_strlen(s);
	if (s != NULL && f != NULL)
	{
		while (x < len)
		{
			(*f)(x, s);
			x++;
			s++;
		}
	}
}

void	*ft_memchr(const void *data, int c, size_t size)
{
	unsigned char	*ptr;

    if (!data)
        return (NULL);
	ptr = (unsigned char *)data;
	while (size--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

int	ft_memcmp(const void *mem1, const void *mem2, size_t size)
{
	unsigned char	*m1;
	unsigned char	*m2;

	if (!mem1)
		return (-1);
	else if (!mem2)
		return (1);
	else if (mem1 && mem2)
	{
		m1 = (unsigned char *)mem1;
		m2 = (unsigned char *)mem2;
		while (size--)
		{
			if (*m1 > *m2)
				return (1);
			if (*m1 < *m2)
				return (-1);
			m1++;
			m2++;
		}
	}
	return (0);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		count;
	const char	*p1;
	const char	*p2;

	count = 0;
	if (!s1 && n > 0)
		return (-s2[count]);
	else if (!s2)
		return (s1[count]);
	else if (s1 && s2)
	{
        p1 = s1;
        p2 = s2;
        while ((p1[count] || p2[count]) && count < n)
        {
            if (p1[count] != p2[count])
                return ((unsigned char)p1[count] - (unsigned char)p2[count]);
            count++;
        }
    }
	return (0);
}

int main(void) {

    const char * str_null = NULL;
    const char * str_full = "A long sentence";
    const char    *str = "lowcases";
    void (*up)(unsigned int, char *) = &test;

    //ft_striteri(str, up);
    
    // THEY SEGFAULT
    //char * copy = ft_strdup(str_null); //
    //char * copy = strdup(str_null); //
    //int len = ft_strlen(str_null); // 
    //int len = strlen(str_null); //
    //int c = tolower(str_null[0]); //
    //int c = toupper(str_null[0]); //
    //int c = isascii(str_null[0]); //
    //memmove(((void*)0), str_null, 5); //
    //memmove(str_null, ((void*)0), 5); //
    //memcpy(((void*)0), "segfaulter tu dois", 17);
    //memset(str_null, 'a', 3);
    //memset(str, 0, 3);
    //strnstr(str_null, str, 3);

    // THEY DON'T SEGFAULT :
    strchr(((void *)0), 'a');
	//ft_strchr(((void *)0), 'a');
	strchr(NULL, '\0');
    //ft_strrchr("coucou", '\0');
	ft_strchr(NULL, '\0');
    //printf( "%s\n", copy );
    //free(copy);
    // ft_atoi(str_null);
    memchr(str_null, 'a', 2);
    //ft_memchr(str_null, 'a', 2);
    memcmp("salut", str_full, 2);
    //memcmp(str_null, str_full, 4);
    //memcmp(str_full, str_null, 4);
    strncmp(str_null, str_null, 2);
    //strncmp(str, str, 0);
    //strncmp(str_null, str, 2);
    //strncmp(str, str_null, 2);

    return (0);
}