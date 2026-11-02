/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:16:04 by kmanar            #+#    #+#             */
/*   Updated: 2026/10/31 19:16:04 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int     count_words(char const *s, char c)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    while(s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return (count);
} 
static int     word_len(char const *s, char c)
{
    int     i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

static char    *copy_word(char const *s, char c)
{
    char    *word;
    int     i;

    word = malloc(sizeof(char) * (word_len(s, c) + 1 ));
    if (!word)
        return (NULL);
    i = 0;
    while (s[i] && s[i] != c)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
char    **free_words(char **result, int j)
{
    while (j > 0)
    {
        j--;
        free(result[j]);       
    }
    free (result);
    return (NULL);
}
char    **ft_split(char const *s, char c)
{
    char    **result;
    int     i;
    int     j;

    if (!s)
        return (NULL);
    result = malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while(s[i])
    {
        while (s[i] == c)
            i++;
        if(s[i])
        {
            result[j] = copy_word(s + i, c);
            if (!result[j])
                return (free_words(result, j));
            j++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    result[j] = NULL;
    return (result);
}

int	main(void)
{
	char	**words;
	int		i = 0;

	words = ft_split("Hello World 1337", ' ');
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (0);
}