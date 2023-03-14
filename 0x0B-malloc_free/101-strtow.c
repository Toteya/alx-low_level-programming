#include "main.h"

/**
 * next_word - Returns the next complete word in the given
 * @str: Double pointer to string whose next word id to be returned
 *
 * Return: Pointer to the string cointaining the word
 */
char *next_word(char **str)
{
	int i, len = 1;
	char *word = NULL;
	char *p_start = NULL;

	for (i = 0; **str != '\0'; i++, (*str)++)
	{
		/* ignore spaces before words */
		if (!p_start)
		{
			if (**str != ' ')
			{
				/* start counting word length */
				p_start = *str;
			}
		}
		/* space means end of word */
		else if (**str == ' ')
			break;
		if (p_start)
			len++;
	}
	word = malloc(sizeof(char) * len);
	if (word == NULL)
		return (NULL);

	for (i = 0; p_start != *str; i++, p_start++)
	{
		word[i] = *p_start;
	}
	word[i] = '\0';
	return (word);
}



/**
 * strtow - Splits a string into an array of strings (words)
 * @str: The string to be split
 *
 * Return: Double pointer to array of strings
 */
char **strtow(char *str)
{
	char **str_arr;
	int i, words = 1;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		/**
		 * count the number of words by looking for spaces
		 * space means end of a word
		 * ignore multiple spaces
		 */
		if (!i && str[i] != ' ')
			/* ignore spaces before the first word */
			words++;
		else if (str[i] != ' ' && str[i - 1] == ' ')
			words++;
	}
	if (words < 2)
		return (NULL);

	str_arr = malloc(sizeof(char *) * words);
	if (str_arr == NULL)
		return (NULL);

	for (i = 0; i < words - 1; i++)
	{
		str_arr[i] = next_word(&str);
		if (str_arr[i] == NULL)
		{
			/* Free up previously malloc'ed memory if malloc fails */
			for (i -= 1; i >= 0; i--)
				free(str_arr[i]);
			free(str_arr);
			return (NULL);
		}
	}
	str_arr[i] = NULL;
	return (str_arr);
}
