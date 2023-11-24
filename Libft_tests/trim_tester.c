#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int	ft_is_set(char letter, char const *charset)
{
	int	c;

	c = 0;
	if (charset)
	{
		while (charset[c])
			{
				if (letter == charset[c])
					return (1);
				c++;
			}
	}
	return (0);
}

static size_t	ft_len_trim(char const *s1, char const *set)
{
	size_t	total_len;
	size_t	start;

	start = 0;
	total_len = strlen(s1);
	while (s1[start] && ft_is_set(s1[start], set))
		start++;
	if (start == total_len)
		return (0);
	while (total_len > start && ft_is_set(s1[total_len - 1], set))
		total_len--;
	return (total_len - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	len;
	size_t	c;
	size_t	d;

	if (!s1)
		return (NULL);
	len = ft_len_trim(s1, set);
	c = 0;
	d = 0;
	copy = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!copy)
		return (NULL);
	while (ft_is_set(s1[d], set))
		d++;
	while (c < len)
	{
		copy[c] = (char)s1[d];
		c++;
		d++;
	}
	copy[c] = '\0';
	return (copy);
}
int main(void)
{
    const char * str_null = NULL;
    const char * str_full = "A long sentence";
    const char    *str = "lowcases";

    char *bad_str = ft_strtrim(str_null, str);
    char *bad_trim = ft_strtrim(str, str_null);
    char *good_trim = ft_strtrim("   Hey you !   ", "\t ");
    free(good_trim);
    free(bad_trim);
    free(bad_str);
    return (0);
}